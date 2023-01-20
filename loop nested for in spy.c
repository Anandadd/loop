#include<stdio.h>
main()
{
    int i,num,d,s,p;
    for(i=10;i<=1000;i++)
    {
        num=i;
        s=0;
        p=1;
        while(num>0)
        {
            d=num%10;
            s=s+d;
            p=p*d;
            num=num/10;
        }
        if(s==p)
        printf("%d is spy \n",i);
    }
}

