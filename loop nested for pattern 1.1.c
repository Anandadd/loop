#include<stdio.h>
main()
{
    int i,j,sp=4;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
        sp--;
    }
}

/*output
    1
   12
  123
 1234
12345
*/

/*#include<stdio.h>
main()
{
    int i,j,sp=4;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
        sp--;
    }
}
output
    1
   21
  321
 4321
54321
*/

/*#include<stdio.h>
main()
{
    int i,j,sp=0;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
        sp++;
    }
}
output
12345
 1234
  123
   12
    1
*/

/*#include<stdio.h>
main()
{
    int i,j,sp=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(j=5;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
        sp++;
    }
}
output
54321
 5432
  543
   54
    5
*/

/*#include<stdio.h>
main()
{
    int i,j,sp=0;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
        sp++;
    }
}
output
54321
 4321
  321
   21
    1
*/

/*#include<stdio.h>
main()
{
    int i,j,sp=4;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(j=5;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
        sp--;
    }
}
output
    5
   54
  543
 5432
54321
*/

/*#include<stdio.h>
main()
{
    int i,j,sp=4;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(j=i;j<=5;j++)
        {
            printf("%d",j);
        }
        printf("\n");
        sp--;
    }
}
output
    5
   45
  345
 2345
12345
*/

/*#include<stdio.h>
main()
{
    int i,j,sp=4;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
        sp--;
    }
}
output
    1
   22
  333
 4444
55555
*/

/*#include<stdio.h>
main()
{
    int i,j,sp=0;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
        sp++;
    }
}
output
55555
 4444
  333
   22
    1
*/

/*#include<stdio.h>
main()
{
    int i,j,sp=4;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(j=5;j>=i;j--)
        {
            printf("%d",i);
        }
        printf("\n");
        sp--;
    }
}
output
    5
   44
  333
 2222
11111
*/

/*#include<stdio.h>
main()
{
    int i,j,sp=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(j=5;j>=i;j--)
        {
            printf("%d",i);
        }
        printf("\n");
        sp++;
    }
}
output
11111
 2222
  333
   44
    5
*/

/*#include<stdio.h>
main()
{
    int i,j,sp=4;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(j=i;j<=5;j++)
        {
            printf("*");
        }
        printf("\n");
        sp--;
    }
}
output
    *
   **
  ***
 ****
*****
*/

/*#include<stdio.h>
main()
{
    int i,j,sp=4;
    for(i=65;i<=69;i++)
    {
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(j=65;j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
        sp--;
    }
}
output
    A
   AB
  ABC
 ABCD
ABCDE
*/

/*#include<stdio.h>
main()
{
    int i,j,sp=0;
    for(i=69;i>=65;i--)
    {
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(j=65;j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
        sp++;
    }
}
output
ABCDE
 ABCD
  ABC
   AB
    A
*/

/*#include<stdio.h>
main()
{
    int i,j,sp=4;
    for(i=65;i<=69;i++)
    {
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(j=i;j>=65;j--)
        {
            printf("%c",j);
        }
        printf("\n");
        sp--;
    }
}
output
    A
   BA
  CBA
 DCBA
EDCBA
*/

/*#include<stdio.h>
main()
{
    int i,j,sp=0;
    for(i=65;i<=69;i++)
    {
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(j=i;j<=69;j++)
        {
            printf("%c",j);
        }
        printf("\n");
        sp++;
    }
}
output
ABCDE
 BCDE
  CDE
   DE
    E
*/

/*#include<stdio.h>
main()
{
    int i,j,sp=4;
    for(i=65;i<=69;i++)
    {
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(j=i;j>=65;j--)
        {
            printf("%c",i);
        }
        printf("\n");
        sp--;
    }
}
output
    A
   BB
  CCC
 DDDD
EEEEE
*/

/*#include<stdio.h>
main()
{
    int i,j,sp=0;
    for(i=65;i<=69;i++)
    {
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(j=i;j<=69;j++)
        {
            printf("%c",i);
        }
        printf("\n");
        sp++;
    }
}
output
AAAAA
 BBBB
  CCC
   DD
    E
*/

/*#include<stdio.h>
main()
{
    int i,j,sp=0;
    for(i=69;i>=65;i--)
    {
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(j=i;j>=65;j--)
        {
            printf("%c",i);
        }
        printf("\n");
        sp++;
    }
}
output
EEEEE
 DDDD
  CCC
   BB
    A
*/

/*#include<stdio.h>
main()
{
    int i,j,sp=3,x=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",x);
            x++;
        }
        printf("\n");
        sp--;
    }
}
output
   1
  23
 456
78910
*/

/*#include<stdio.h>
main()
{
    int i,j,sp=4;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i*2-1;j++)
        {
            printf("*");
        }
        printf("\n");
        sp--;
    }
}
output
    *
   ***
  *****
 *******
*********
*/

/*#include<stdio.h>
main()
{
    int i,j,sp=0;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i*2-1;j++)
        {
            printf("*");
        }
        printf("\n");
        sp++;
    }
}
output
*********
 *******
  *****
   ***
    *
*/

/*#include<stdio.h>
main()
{
    int i,j,sp=4;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i;j++)
            printf("*");
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
        sp=sp-2;
    }
    sp=0;
    for(i=3;i>=1;i--)
    {
        for(j=1;j<=i;j++)
            printf("*");
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
        sp=sp+2;
    }
}
outout
*    *
**  **
******
******
**  **
*    *

*/

/*#include<stdio.h>
main()
{
    int i,j,sp=4;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i;j++)
            printf("*");
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
        sp=sp-2;
    }
}
output
*    *
**  **
******
*/

/*#include<stdio.h>
main()
{
 int i,j,sp=0;
    for(i=3;i>=1;i--)
    {
        for(j=1;j<=i;j++)
            printf("*");
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
        sp=sp+2;
    }
}
output
******
**  **
*    *

*/

/*#include<stdio.h>
main()
{
    int i,j,sp=4;
    for(i=65;i<=69;i++)
    {
        for(j=1;j<=sp;j++)
            printf(" ");
        for(j=65;j<=i;j++)
            printf("%c",j);
        for(j=i-1;j>=65;j--)
            printf("%c",j);
        printf("\n");
        sp--;
    }
}
output
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/

/*#include<stdio.h>
main()
{
    int i,j,sp=0;
    for(i=69;i>=65;i--)
    {
        for(j=1;j<=sp;j++)
            printf(" ");
        for(j=65;j<=i;j++)
            printf("%c",j);
        for(j=i-1;j>=65;j--)
            printf("%c",j);
        printf("\n");
        sp++;
    }
}
output
ABCDEDCBA
 ABCDCBA
  ABCBA
   ABA
    A
*/

/*#include<stdio.h>
main()
{
    int i,j,sp=0;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=sp;j++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("%d",j);
        for(j=i-1;j>=1;j--)
            printf("%d",j);
        printf("\n");
        sp++;
    }
}
output
123454321
 1234321
  12321
   121
    1
*/
/*#include<stdio.h>
main()
{
    int i,j,sp=4;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=sp;j++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("%d",j);
        for(j=i-1;j>=1;j--)
            printf("%d",j);
        printf("\n");
        sp--;
    }
}
output
    1
   121
  12321
 1234321
123454321
*/
