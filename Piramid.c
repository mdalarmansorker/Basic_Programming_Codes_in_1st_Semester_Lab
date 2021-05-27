#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,line;
    printf("Enter pyramid size: ");
    scanf("%d",&line);
    for(i=1;i<=line;i++)
    {
        for(j=(line-1); j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
