#include<stdio.h>
main()
{
    int x,s=0,d,t;
    printf("enter a no.");
    scanf("%d",&x);
    t=x;
    for(;x>0;)
    {
        d=x%10;
        s=s+d;
        x=x/10;
    }
    if(t%s==0)
        printf(" niven is %d",t);
        else
            printf(" not niven");
}
