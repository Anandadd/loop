#include<stdio.h>
main()
{
    int x;
    for(x=1;x<=10;x++)
    {
        if(x==5)
      continue;
        printf("%d\n",x);
    }
}

