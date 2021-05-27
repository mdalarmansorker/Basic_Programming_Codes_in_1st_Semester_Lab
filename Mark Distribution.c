#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter your marks\n");
    int m;
    scanf("%d",&m);

    if(m>=80)
	{

		printf("The Grade is A+");
	}
	else if(m>=75 && m<80)
		{
			printf("The Grade is A");
	}
	else if(m>=70 && m<75)
		{
			printf("The Grade is A-");
	}
	else if(m>=65 && m<70)
		{
			printf("The Grade is B+");
	}
	else if(m>=60 && m<65)
		{
			printf("The Grade is B-");
	}
	else
		{
			printf("The Grade is F");
	}

    return 0;
}
