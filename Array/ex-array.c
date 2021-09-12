#include<stdio.h>

int main()
{
    int mask[4];
    
    for(int i=0; i<=3; i++)
    {
        printf("enter the mask of student %d\n",i);
        scanf("%d",&mask[i]);
    }

    for(int j=0; j<=3; j++)
    {
        printf("mask of student %d is %d\n",j,mask[j]);
    }

    return 0;
}