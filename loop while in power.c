#include<stdio.h>
main()
{
    int x,y,p=1;
    printf("enter two no.");
    scanf("%d%d",&x,&y);
    while(y>=1)
    {
        p=p*x;
        y--;
    }
    printf("power of is %d",p);
}
