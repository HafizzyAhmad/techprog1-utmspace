#include <stdlib.h>
#include <stdio.h>

int main()
{
	float feh, cel;
	
	printf("\n\nPlease enter temperature in fahrenheit:");
	scanf("%f",&feh);
	
	cel = (feh-32.0)*(5.0/9.0);
	
	printf("\nTemperature in celcius is %f\n\n", cel );
	
	return 0;
	
	
}



