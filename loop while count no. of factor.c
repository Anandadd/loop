#include<stdio.h>
main()
{
    int i=1,n,m=0;
    printf("enter a no.");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
            m++;
        }
        i++;
    }
        printf("no. of factor %d", m);
}
