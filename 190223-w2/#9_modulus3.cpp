#include <stdlib.h>
#include <stdio.h>
#include <math.h>>

int main()
{
	int n, div;	
	printf("Please enter number: \n\n");
	scanf("%d", &n);
	
	tag:
	
	if (n>1)
	{
		n=n-2;
		goto tag;
	}
		
		
		if (n==1)
		printf("ganjil\n");
		
		else
		printf("genap\n");

	return 0;

}



