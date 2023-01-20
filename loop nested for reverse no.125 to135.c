#include<stdio.h>
main()
{
    int i,num,d,s;
    for(i=125;i<=135;i++)
    {
        num=i;
        s=0;
        while(num>0)
        {
            d=num%10;
            s=s*10+d;
            num=num/10;
        }
        printf("%d reverse no. is %d\n",i,s);
    }
}
