#include<stdio.h>
main()
{
    int x,s=0,d,t,p=1;
    printf("enter a no.");
    scanf("%d",&x);
    t=x;
    for(;x>0;)
    {
        d=x%10;
        s=s+d;
        p=p*d;
        x=x/10;
    }
    if(s==p)
        printf("spy is %d",t);
        else
            printf(" not spy");
}
