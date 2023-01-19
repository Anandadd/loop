#include<stdio.h>
main()
{
    int x=1,p=1;
    bscmath: if(x%2==1)
    {
        p=p*x;
    printf("%d\n",x);
    }
    x++;
    if(x<=10)
    {
        goto bscmath;
    }
    printf("%d",p);
}
