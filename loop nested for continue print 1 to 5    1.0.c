#include<stdio.h>
main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
        if(j==3)
            continue;
        printf("%d%d\n",i,j);
    }
}
}
