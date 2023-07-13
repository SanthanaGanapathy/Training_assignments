//Smallest element in array
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[5]={20,35,22,11,5};
    int min=arr[0];
    for(int i=0;i<5;i++)
    {
        if (arr[i]<min)
            min=arr[i];
    }
    printf("smallest element of the array is:%d",min);
    
}