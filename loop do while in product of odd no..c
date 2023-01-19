#include<stdio.h>
main()
{
    int x=10,p=1;
    do
    {
        if(x%2==1)
        {
            printf("%d\n",x);
        p=p*x;
        }
        x--;
    }while(x>=1);
    printf("product is %d",p);
}
