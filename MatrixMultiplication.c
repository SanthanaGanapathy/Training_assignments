#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a1[3][3]={{1,2,3},{2,3,4},{1,2,3}};
    int a2[3][3]={{2,4,4},{4,5,6},{7,2,1}};
    int sum[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                 sum[i][j] =a1[i][k]*a2[k][j];  
            }
        }
    }
    printf("\nMultiplication of Two Matrices:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d  ",sum[i][j]);
        }
        printf("\n");
    }
}