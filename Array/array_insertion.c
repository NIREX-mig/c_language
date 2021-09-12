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

void sort(int arr[], int size)
{
    // Sorting the array in accesinding order using swap
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int indexinsertion(int arr[], int size, int capacity, int index, int element)
{
    // Code for insertion

    if (size >= capacity)
    {
        printf("You have not suffecient memory");
        return -1;

    }

    for (int i = size - 1; i >= index; i--)
    {
        // For sift element one by one in next address
        arr[i + 1] = arr[i];
    }

    // insert element in index
    arr[index] = element;
    printf("\nInsertion successfully\n");

    // call show function for print array after insertion
    printf("\nArray (after insertion):- ");
    show(arr, size);

    return 1;
}

int main()
{
    // Initilising variable
    int arr[100], size, index, element;

    // input used size of array by user
    printf("Enter the size of array\n");
    scanf("%d", &size);

    // input elements of the array by user
    printf("\nEnter the element of array\n");
    for (int i = 0; i < size; i++)
    {
        printf("Element %d :- ", i);
        scanf("%d", &arr[i]);
    }

    // Call show function for print entered array
    printf("\nEntered array :- ");
    show(arr, size);

    // call sort function for sorting the array
    sort(arr, size);

    // call show function for print sorted array
    printf("\nSorted array :- ");
    show(arr, size);

    // Enter the index(specified position) for insert the element 
    printf("Enter the index for insert element\n");
    scanf("%d", &index);

    // Enter element
    printf("Enter the element\n");
    scanf("%d", &element);

    // call the indexinsertion function for insert element of specified position
    indexinsertion(arr, size, 100, index, element);

    return 0;
}