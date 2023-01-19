#include<stdio.h>
main()
{
    int i=1,p=1;
    while(i<=10)
    {
        p=p*i;
        printf("%d\n",i);
        i++;
    }
    printf("product =%d",p);
}
