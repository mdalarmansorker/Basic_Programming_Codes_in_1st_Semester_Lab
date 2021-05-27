#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a number\n");
    int n,i,m=0;
    scanf("%d",&n);
    printf("%d is divided by:",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
             printf("%d, ",i);

            m++;
        }
    }
    if(m==2)
    printf("\n%d is prime",n);
    else
        printf("\n%d is not prime",n);
    return 0;
}
