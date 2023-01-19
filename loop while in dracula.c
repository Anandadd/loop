#include<stdio.h>
main()
{
    int x,d,s=0,fd,t;
    printf("enter a no.");
    scanf("%d",&x);
    fd=x%10;
    t=x;
    x=x/10;
    while(x>0)
    {
        d=x%10;
        s=s+d;
        x=x/10;
    }
    if(fd==s)
    printf("%d is dracula",t);
    else
        printf("%d is not dracula",t);
}

