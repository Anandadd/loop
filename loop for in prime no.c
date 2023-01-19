#include<stdio.h>
main()
{
    int x,i;
    printf("enter a no.");
    scanf("%d",&x);
    for(i=2;i<x;i++)
    {
       if(x%i==0)
       {
        printf("not prime no.");
        break;
       }
       }
       if(x==i)
    printf(" prime no.");
}
