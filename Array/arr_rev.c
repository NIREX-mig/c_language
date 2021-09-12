/*parpus:-Write a program in C
to read n number of values in
an array and display it in
reverse order

author:- ashish kumar (NIreX)
date:-13/04/2021.
  */
#include<stdio.h>

void main()
{
    int arr[100];
    int n;

    printf("read the number element for store in arry\n ");
    printf("_____________________________\n");
    printf("how many array are enter you :");
    scanf("%d",&n);
    
    for(int i=0; i<n; i++)
    {
        printf("element %d :",i);
        scanf("%d",&arr[i]);
    }
    
    printf("\n\n");
    printf("the array are :");
    
    for(int i=0; i<n;i++)
    {
        printf("%d",arr[i]);
        
    }
    
    printf("\n\n");
    printf("the array in revers likeed are :");
    
    for(int i=n-1;i>=0;i--) //array reverse tric without swap 
    {
        printf("%d",arr[i]);
    }
    printf("\n\n");
}