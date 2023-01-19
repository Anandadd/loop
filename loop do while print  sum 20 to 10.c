#include<stdio.h>
main()
{
    int x=20,s=0;
    do
    {
        printf("%d\n",x);
        s=s+x;
        x--;
    }while(x>=10);
    printf("%d",s);
}
