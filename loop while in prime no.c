#include<stdio.h>
main()
{
    int i=2,x;
    printf("enter a no.");
    scanf("%d",&x);
    while(i<=x-1)
    {
        if(x%i==0)
        {
            printf("not prime no.");
            break;
        }
        i++;
    }
    if(i==x)
        printf("prime no.");
}
