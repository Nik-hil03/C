// print first n odd natural number 

#include<stdio.h>

int main()
{
    int n, i;
    printf("Enter a number : ");
    scanf("%d",&n);

    //result
    for (i=1;i<=2*n-1;i=i+2)
        printf("%d ",i);

    printf("\n");

    return 0;
}