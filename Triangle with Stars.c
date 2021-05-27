#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,l;
    printf("Enter the lines number for type 1:");
    scanf("%d",&l);
    for(a=1;a<=l;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("*");
        }
        printf("\n");
    }
    int c,d,e,li;
    printf("Enter the lines number for type 2:");
    scanf("%d",&li);
    for(c=1;c<=li;c++)
    {
        for(d=(li-1);d>=c;d--)
        {
            printf(" ");
        }
       for(e=1;e<=c;e++)
        {
            printf("*");
        }
        printf("\n");
    }
     int f,g,h,lin;
    printf("Enter the lines number for type 3:");
    scanf("%d",&lin);
    for(f=1;f<=lin;f++)
    {
        for(g=lin;g>=f;g--)
        {
            printf("*");
        }
        printf("\n");
    }
       int i,j,k,line;
    printf("Enter the lines number for type 4:");
    scanf("%d",&line);
     for(i=1;i<=line;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
       for(k=line;k>=i;k--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
