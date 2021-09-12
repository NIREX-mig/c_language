#include<stdio.h>

/*  
    parpus:-reverse array using function array swap
    author:- NIreX devloper
    date:- 19/04/2021
*/
void revarray(int arr[])
{
    int temp;
    for(int i=0; i<4; i++)
    {
        temp = arr[i];
        arr[i] = arr[6-i];
        arr[6-i] = temp;
    }
}

int main()
{
    int arr[]= {1,2,3,4,5,67,7};
    printf("before reverseing the array is: ");
    for(int i=0; i<7; i++)
    {
        printf("%d ",arr[i]);
    }

    revarray(arr);
    printf("\nafter reverseing the array is: ");
    for(int i=0; i<7; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}