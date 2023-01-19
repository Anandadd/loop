#include<stdio.h>
main()
{
    int x=1;
    do
    {
        if(x%2==0)
            printf("%d\n",x);
        x++;
    }while(x<=30);
}
