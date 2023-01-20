#include<stdio.h>
main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        if(i==3)
            break;
        for(j=1;j<=5;j++)
        {
        if(j==3)
            break;
        printf("%d%d\n",i,j);
    }
}
}
