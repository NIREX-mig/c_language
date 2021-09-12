// pourpose:- Sort array elements in ascending or descending order.
// author:- NIreX

#include <stdio.h>

int main()
{
    // initializing variable
    int arr[30];
    int size;
    int temp;
    int tem;
    // Enter the size of array
    printf("Enter the size of array\n");
    scanf("%d", &size);
    // input array element from user
    printf("Enter the element\n");
    for (int k = 0; k < size; k++)
    {
        printf("element %d:- ", k);
        scanf("%d", &arr[k]);
    }
    // print array
    printf("The array :- ");
    for (int l = 0; l < size; l++)
    {
        printf("%d ", arr[l]);
    }
    printf("\n");
    // sorting array
    for (int k = 0; k < size; k++)
    {
        for (int l = k + 1; l < size; l++)
        {
            if (arr[k] > arr[l]) // sorting for ascinding order
            {
                temp = arr[k];
                arr[k] = arr[l];
                arr[l] = temp;
            }
        }
    }

    // print ascinding ordered array
    printf("The stored array in ascinding order\n");
    for (int k = 0; k < size; k++)
    {
        printf("%d ", arr[k]);
    }
    // sorting array
    for (int k = 0; k < size; k++)
    {
        for (int l = k + 1; l < size; l++)
        {
            if (arr[k] < arr[l]) // sorting for decinding order
            {
                tem = arr[k];
                arr[k] = arr[l];
                arr[l] = tem;
            }
        }
    }

    // print decinding ordered array

    printf("\nThe stored array in desinding order\n");
    for (int m = 0; m < size; m++)
    {
        printf("%d ", arr[m]);
    }
    return 0;
}