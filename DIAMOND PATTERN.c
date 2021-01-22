#include <stdio.h>

void did_print(int num)
{

    int i, j, count = 1;
    count = num - 1;

    for (j = 1; j <= num; j++){
        for (i = 1; i <= count; i++)

            printf(" ");

        count--;

        for (i = 1; i <= 2 * j - 1; i++)

            printf("*");

        printf("\n");
    }

    count = 1;

    for (j = 1; j <= num - 1; j++){

        for (i = 1; i <= count; i++)

            printf(" ");

        count++;

        for (i = 1; i <= 2 * (num - j) - 1; i++)

            printf("*");

        printf("\n");
    }
}


int main()
{
    int num;
    int count = 1;
    printf("Enter the size of diamond pattern :");
    scanf("%d", &num);
    did_print(num);
}