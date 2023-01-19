#include<stdio.h>
main()
{
    int i,p=1;
    printf("enter a no.");
    scanf("%d",&i);
    while (i>=1)
    {
        p=p*i;
        printf("%d\n",i);
        i--;
    }
    printf("factorial of a no is %d",p);
}
