#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a1[2][3]={{1,2,3},{2,3,4}};
    int a2[2][3]={{2,4,3},{4,5,6}};
    int sum[2][3];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
          sum[i][j] =a1[i][j]+a2[i][j];  
        }
    }
    printf("\nSum of Two Matrices:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d  ",sum[i][j]);
        }
        printf("\n");
    }
}