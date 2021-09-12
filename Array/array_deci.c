#include <stdio.h>

int main()
{
    int arr[30];
    int n, temp;

    printf("Enter the size of array\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) // Enter the element by user
    {
        printf("element %d :- ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nThe array is:- "); // print the array
    for (int j = 0; j < n; j++)
    {
        printf("%d  ", arr[j]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nThe sorted array in decinding order \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}