#include<stdio.h>
main()
{
    int x,s=0;
    char choice;
    do
    {
        printf("enter a no.");
        scanf("%d",&x);
        s=s+x;
        printf("would you like to continue [y/n]");
        fflush(stdin);
        scanf("%c",&choice);
    }while(choice=='y'||choice=='Y');
    printf("sum is %d",s);
}
