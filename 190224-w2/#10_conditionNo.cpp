#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a,b,c;
	printf("\nPlease enter number A:");
	scanf("%d",&a);

	printf("\nPlease enter number B:");
	scanf("%d",&b);

	printf("\nPlease enter number C:");
	scanf("%d",&c);

	if (a>b)
	{
		if(a>c)
			printf("\nnombor terbesar = %d\n\n", a);
		else
			printf("\nnombor terbesar = %d\n\n", c);
	}

	else
	{
		if (b>c) 
			printf("\nnombor terbesar = %d\n\n", b);
		else
			printf("\nnombor terbesar = %d\n\n", c);
	}

	
	return 0;
	
	
}



