#include <stdlib.h>
#include <stdio.h>
#include <math.h>>

int main()
{
	int n, div;	
	printf("Please enter number: \n\n");
	scanf("%d", &n);
	
	div = n/2;
	
	if (div*2==n)
		printf ("\ngenap");
	
	else
		printf("\nganjil");

	return 0;

}



