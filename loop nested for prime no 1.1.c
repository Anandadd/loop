#include<stdio.h>
main()
{
    int i,j;
    for(i=1;i<=1000;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
    if(i==j)
        printf("prime no %d\n",i);
}
}
