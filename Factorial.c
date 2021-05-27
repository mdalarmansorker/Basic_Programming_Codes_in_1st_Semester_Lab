#include <stdio.h>
int Fact(int n){
int f=1;
if(n!=1){
f=n*Fact(n-1);
}
return f;
}
int main()
{
int n=0;
printf("Type a number to get its factorial\n");
scanf("%d",&n);
printf("The factorial of %d is = %d \n",n,Fact(n));
return 0;
}