#include<stdio.h>
main()
{
    int i=20,sum=0;
    while(i<=40)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
            sum=sum+i;
        }
        i++;
    }
    printf("sum =%d",sum);
}
