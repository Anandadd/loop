#include<stdio.h>
main()
{
    int x,s=0,d,fd,t;
    printf("enter a no.");
    scanf("%d",&x);
    t=x;
    fd=x%10;
    x=x/10;
    for(;x>0;)
    {
        d=x%10;
        s=s+d;
        x=x/10;
    }
    if(fd==s)
        printf(" dracula %d",t);
        else
            printf("not dracula");
}
