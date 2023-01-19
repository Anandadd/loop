#include<stdio.h>
main()
{
    int i=10,p=1;
    while (i>=1)
    {
        if(i%2==1)
        {
            printf("%d\n",i);
            p=p*i;
        }
        i--;
    }
    printf("product of odd no, %d",p);
}
