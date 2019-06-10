#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c,chk, x1, x2;
	printf("Please enter a,b,c,\n");
	scanf("%f%f%f", &a, &b, &c);
	
	chk = b*b-4*a*c;
	
	if (chk<0)
	printf ("punca komplek\n");
	
	else
	if (chk==0)
	{
		x1=-b/(2*a);
		printf("punca = %f\n", x1);
	}
	
	else
	{
		x1 = ((-b - sqrt (chk))/2*a);
		x2 = ((-b + sqrt (chk))/2*a);
		printf("punca = %f dan %f\n", x1, x2);
	}
	

	
	return 0;

}



