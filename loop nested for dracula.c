#include<stdio.h>
main()
{
    int i,num,d,s,fd;
    for(i=1;i<=1000;i++)
    {
        fd=i%10;
        num=i/10;
        s=0;
        while(num>0)
        {
            d=num%10;
            s=s+d;
            num=num/10;
        }
        if(fd==s)
            printf("dracula no is %d\n",i);
    }
}
