#include<stdio.h>
main()
{
    int i,num,s,d;
    for(i=1;i<=1000;i++)
    {
        num=i;
        s=0;
        while(num>0)
        {
            d=num%10;
            s=s+d*d*d;
            num=num/10;
        }
        if(s==i)
            printf("%d is armstrong\n",s);
    }
}
