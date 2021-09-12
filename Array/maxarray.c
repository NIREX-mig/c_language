#include<stdio.h>

int maxarr(int array[],int n)
{   int max=0;
    for(int i=0; i < n;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }

    }

    return max;
}

int main()
{
    int arr[]= {1,12656,43,82,748,2882};
    int max=maxarr(arr, 6);
    
    printf("the maximum element in this arry is %d",max);
    return 0;
}