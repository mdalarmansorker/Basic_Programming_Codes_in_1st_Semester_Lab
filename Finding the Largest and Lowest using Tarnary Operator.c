#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Using of tarnary operator by MD AL ARMAN SORKER
    int x,y,z,a,b;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&x,&y,&z);
    a=(x>y && x>z)?x:((x<y && y>z)?y:z);
     b=(x<y && x<z)?x:((x>y && y<z)?y:z);
    printf("%d is the largest number and %d is the lowest number",a,b);
    return 0;
}
