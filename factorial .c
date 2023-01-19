#include<stdio.h>
main()
{
    int fact=1,n,i=0;
    printf("enter a no.");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
     fact=fact*(n-i);
    }
    printf("factorial of %d is %d",n,fact);
}