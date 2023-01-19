#include<stdio.h>
main()
{
    int x,m=0,i=1;
    printf("enter a no.");
    scanf("%d",&x);
    do
    {
        if(x%i==0)
        {
            printf("%d\n",i);
            m++;
        }
        i++;
    }while(x>=i);
    printf("no of factor %d",m);
}
