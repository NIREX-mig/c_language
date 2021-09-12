// C program to sort the array in an
// ascending order using selection sort

#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int temp;

    printf("Enter the size of array\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) // enter element by user
    {
        printf("element %d:- ", i);
        scanf("%d", &arr[i]);
    }

    printf("The array is :- ");    // print array 
    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
    printf("\nThe sorted array in aciding order\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}