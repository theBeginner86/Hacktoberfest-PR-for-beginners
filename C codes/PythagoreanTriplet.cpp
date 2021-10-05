#include<iostream>
#include<algorithm>
using namespace std;

bool check(int x, int y, int z){
    int a=std::max(x,std::max(y,z));
    int b, c;

    if(a==x){
        b=y;
        c=z;
    }

    else if(a==y){
        b=x;
        c=z;
    }

    else{
        b=x;
        c=y;
    }

    if(a*a==b*b+c*c){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    int x, y, z;
    cout<<"Enter three numbers:"<<endl;
    cin>>x>>y>>z;

    if(check(x,y,z)){
        cout<<"Pythagorean triplet"<<endl;
    }
    else{
        cout<<"Not a Pythagorean triplet"<<endl;
    }
}