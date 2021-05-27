#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Finding Leap Year with ternary operator  by MD AL ARMAN SORKER
    int year;
    printf("Enter a Year\n");
    scanf("%d",&year);
    (year%400==0)?printf("%d is Leap Year",year):(year%100!=0 && year%4==0)?printf("%d is Leap Year",year):printf("%d is not Leap Year",year);
    return 0;
}
