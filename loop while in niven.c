#include<stdio.h>
main()
{
    int x,d,s=0,t;
    printf("enter a no.");
    scanf("%d",&x);
    t=x;
    while(x>0)
    {
        d=x%10;
        s=s+d;
        x=x/10;
    }
    if(t%s==0)
        printf("%d is niven",t);
    else
    printf("%d is not niven",t);
}
