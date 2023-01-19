#include<stdio.h>
main()
{
    int x,p=1;
    printf("enter a no.");
    scanf("%d",&x);
    do
    {
        p=p*x;
        printf("%d\n",x);
        x--;
    }while(x>=1);
    printf("factorial = %d",p);
}
