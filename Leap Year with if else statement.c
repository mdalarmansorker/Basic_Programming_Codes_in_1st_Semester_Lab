#include <stdio.h>
int main()
{
    //MD AL ARMAN SORKER
    int year;
    printf("Enter a year\n");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("%d is the Leap Year\n",year);
    }
    else if(year%100==0)
    {
        printf("%d is not a Leap Year\n",year);
    }
    else if(year%4==0)
    {
        printf("%d is the Leap Year\n",year);
    }
    else
    {
         printf("%d is not a Leap Year\n",year);
    }
    return 0;
}
