#include<stdio.h>
main()
{
    int i,j;
    for(i=3;i<=8;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%d*%d=%d\n",i,j,i*j);
        }
    }
}
