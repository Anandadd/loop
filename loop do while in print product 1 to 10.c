#include<stdio.h>
main()
{
    int x=1,p=1;
    do
    {
        printf("%d\n",x);
        p=p*x;
        x++;
    }while(x<=10);
    printf("%d",p);
}
