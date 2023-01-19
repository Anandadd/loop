#include<stdio.h>
main()
{
    int i=20,sum=0;
    while(i>=10)
    {
        sum=sum+i;
        printf("%d\n",i);
        i--;
    }
    primtf("sum= %d",sum);
}
