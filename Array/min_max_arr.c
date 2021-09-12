#include <stdio.h>

int returnmax(int arr[],int n)
{
    int max=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

int returnmin(int arr[],int n)
{
    int max=0,min;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else if(arr[i]<max)
        {
            min=arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[]= {2,3,8,5,1};
    int max= returnmax(arr,5);
    int min= returnmin(arr,5);
    printf("the maximum element of array is %d\n", max);
    printf("the minmum element of array is %d\n", min);
    return 0;
}