#include<stdio.h>
main()
{
    int x,i=1,a;
    printf("enter a no.");
    scanf("%d",&x);
    while(i<=10)
    {
       a=x*i;
    printf("%d*%d =%d\n",x,i,a);
    i++;
    }
}
