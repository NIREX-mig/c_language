#include<stdio.h>
#include<string.h>

/* parpus:- manage traveling agency manage the driver details. harry
 question
author:-NIreX devloper
date:-20/04/2021*/



struct drivers
{
    char name[30];
    char dlno[30];
    char route[30];
    int kms;
};

struct drivers d1,d2,d3;


int main()
{
    printf("enter the details of first driver\n");
    printf("\nenter the name of 1st driver\n");
    scanf("%s",&d1.name);
    printf("enter the dlno of 1st driver\n");
    scanf("%s",&d1.dlno);
    printf("enter the route of 1st driver\n");
    scanf("%s",&d1.route);
    printf("enter the kms of 1st driver\n");
    scanf("%d",&d1.kms);
    
    printf("\n\n");
    
    printf("\nenter the details of 2nd driver\n");
    printf("enter the name of 2nd driver\n");
    scanf("%s",&d2.name);
    printf("enter the dlno of 2nd driver\n");
    scanf("%s",&d2.dlno);
    printf("enter the route of 2nd driver\n");
    scanf("%s",&d2.route);
    printf("enter the kms of 2nd driver\n");
    scanf("%d",&d2.kms);
    
    
    printf("\nenter the details of 3rd driver\n");
    printf("enter the name of 3rd driver\n");
    scanf("%s",&d3.name);
    printf("enter the dlno of 3rd driver\n");
    scanf("%s",&d3.dlno);
    printf("enter the route of 3rd driver\n");
    scanf("%s",&d3.route);
    printf("enter the kms of 3rd driver\n");
    scanf("%d",&d3.kms);
    
    
    printf("\n-the details of 1st driver is--\n");
    printf("name:-%s\n",d1.name);
    printf("dlno:-%s\n",d1.dlno);
    printf("route:-%s\n",d1.route);
    printf("kms:-%d\n",d1.kms);
    
    printf("\n-the details of 2nd driver is--\n");
    printf("name:-%s\n",d2.name);
    printf("dlno:-%s\n",d2.dlno);
    printf("route:-%s\n",d2.route);
    printf("kms:-%d\n",d2.kms);
    
    printf("\n-the details of 3rd driver is--\n");
    printf("name:-%s\n",d3.name);
    printf("dlno:-%s\n",d3.dlno);
    printf("route:-%s\n",d3.route);
    printf("kms:-%d\n",d3.kms);
    
    return 0;
}