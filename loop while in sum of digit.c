#include<stdio.h>
main()
{
    int x,d,s=0;
    printf("enter a no.");
    scanf("%d",&x);
    while(x>0)
    {
        d=x%10;
        s=s+d;
        x=x/10;
    }
    printf("sum of digit =%d",s);
}
