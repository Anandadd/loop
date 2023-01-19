#include<stdio.h>
main()
{
    int x,d,s=0;
    printf("enter a no.");
    scanf("%d",&x);
    while(x>0)
    {
        d=x%10;
        s=s*10+d;
        x=x/10;
    }
    printf("reverse of digit =%d",s);
}
