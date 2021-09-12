// parpose :- Delete all duplicate elements from an array.   
// author :- NIreX

#include <stdio.h>

int main()
{
    // initialies variable
    int n, arr[30];
    int c = 0, k = 0;

    // input array size
    printf("Enter the size of array\n");
    scanf("%d", &n);

    // input array element
    printf("\nEnter the element\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // delete duplicate element
    for (int  i = 0; i < n; i++)
    {
        if(arr[i]!= -1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i]==arr[j])
                {
                    c++;
                    arr[j] = -1;
                }
            }
        }

        if(arr[i]!=-1){
            arr[k++] = arr[i];
        }
    }


    // print array after deleting dupalicate element
    printf("After deleting duplicate element\n");
    for (int i = 0; i < n - c; i++)
    {
        printf("%d ", arr[i]);
    }

        return 0;
}