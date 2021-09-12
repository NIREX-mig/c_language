// Author :- NIreX
// Parpous :- insertion of array in specified position

#include <stdio.h>


void show(int arr[], int size)
{
    //print the entered array(traversal)
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    // Initilising variable
    int arr1[5];
    int arr2[10];

    // input elements of the array by user
    printf("\nEnter the element of array\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Element %d :- ", i);
        scanf("%d", &arr1[i]);
    }
    
    show(arr1,5);
    
    //copy arr1 element in arr2
    printf("secound arr\n");
    for(int i =0;i<=10;i++)
    {
        arr2[i]=arr1[i];
    }
    
    
    // input elements of the array by user
    printf("\nEnter the element of array\n");
    for (int i = 5; i < 10; i++)
    {
        printf("Element %d :- ", i);
        scanf("%d", &arr2[i]);
    }
    
    show(arr2,10);

    return 0;
}