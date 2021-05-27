#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i, j,k,l,t,m,s;
    printf("Enter the line : ");
    scanf("%d",&a);
    s=a-2;
    for(i=1;i<a;i++)
    {
        printf(" ");
    }
    printf("*\n");
    m=1;
    for(j=1;j<=(a-2);j++)
    {
           for(k=1;k<=s;k++)
             {
               printf(" ");
             }
             s=s-1;
               printf("*");

               for(l=1;l<=m;l++)
               {
                   printf(" ");
               }
               m=m+2;
               printf("*\n");
    }
 for(t=1;t<=((2*a)-1);t++)
    {
        printf("*");
    }
    return 0;
}
