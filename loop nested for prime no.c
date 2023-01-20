#include<stdio.h>
main()
{
    int i,j,count;
    for(i=1;i<=1000;i++)
    {
        count=0;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
        count++;
        break;
        }
    }
    if(count==0&&i!=1)
        printf("%d\n",i);

}
}

