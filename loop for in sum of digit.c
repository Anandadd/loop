#include<stdio.h>
main()
{
    int x,s=0,d;
    printf("enter a no.");
    scanf("%d",&x);
    for(;x>0;)
    {
        d=x%10;
        s=s+d;
        x=x/10;
    }
        printf("%d",s);
}
