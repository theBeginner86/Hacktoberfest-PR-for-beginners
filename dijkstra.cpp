#include<iostream>
using namespace std;
#define infinity 100000
////////////////
void create(int *a,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>*(a+i*n+j);
        }
    }
}
//////////////
void print(int *a,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<*(a+i*n+j)<<" ";
        }
        cout<<endl;
    }
}
///////////////////////
void dijkstra(int *a,int n,int s)
{
    int i,j;
    int cost[n][n];
    for(i=0;i<n;i++)//assigning value to cost to each edge of a graph
    {
        for(j=0;j<n;j++)
        {
            if(*(a+i*n+j)==0)
                cost[i][j]=infinity;
            else
            {
                cost[i][j]=*(a+i*n+j);
            }
        }
    }
    int dist[n],visit[n]={0},prev[n];

    for(i=0;i<n;i++)//finding edge that are directly connected with source vertex
    {
        dist[i]=cost[s][i];
        prev[i]=s;
        visit[i]=0;
    }

    dist[s]=0;//assigning distance of source vertex 0
    visit[s]=1;//declaring we have already visited source vertex


    int coun=1;
    int nextnode,mindist;
    while(coun<n-1)
    {
        mindist=infinity;//assigning value to min distance infinity
        for(i=0;i<n;i++)//finding min distance of vertex and assigning it as next source vertex
        {
               if(mindist>dist[i]&&visit[i]!=1)
               {
                   mindist=dist[i];
                   nextnode=i;

               }
        }

        visit[nextnode]=1;//declaring we have already visited next vertex

        for(i=0;i<n;i++)
        {

            if(mindist+cost[nextnode][i]<dist[i]&&visit[i]!=1)//relaxing each vertex which are relaxable
            {

                dist[i]=mindist+cost[nextnode][i];
                  prev[i]=nextnode;//assigning value of next node which show that using next node vertex given vertex is relaxed
            }

        }

coun++;
    }

    cout<<"************graph traversal with minimum weight*************"<<endl;
    for(i=0;i<n;i++)
        {
            if(i!=s)
            {
                cout<<"distnce of node "<<i<<" "<<dist[i];
                cout<<" path "<<i;
                int j=i;
                do
                {
                    j=prev[j];
                    cout<<"-> "<<j;
                }while(j!=s);
            }
            cout<<endl;
        }

}
////////////////////
int main()
{
    int n;
    cout<<"enter vertices"<<endl;
    cin>>n;
    int a[n][n];
    create((int *)a,n);
    print((int *)a,n);
    int s;
    cout<<"enter source vertices"<<endl;
    cin>>s;
    dijkstra((int *)a,n,s);
    return 0;
}
