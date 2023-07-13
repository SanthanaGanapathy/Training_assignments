#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[]={10,20,30,40,50};
    int sum =0;
    for(int i=0;i<=5;i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum of elements of the Array: %d",sum);
}