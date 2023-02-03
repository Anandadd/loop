#include<stdio.h>
main()
{
    int i,j,x=1,sp=0,k;
    for(i=71;i>=65;i--)
    {
    for(j=65;j<=i;j++)
    printf("%c",j);
    if(i==71)
    {
    for(k=i-1;k>=65;k--)
    printf("%c",k);
    printf("\n");
    sp++;
    }
    else
   {
    for(j=1;j<=sp;j++)
    printf(" ");
    for(k=i;k>=65;k--)
    printf("%c",k);
    printf("\n");
    sp=sp+2;
    }
}
}