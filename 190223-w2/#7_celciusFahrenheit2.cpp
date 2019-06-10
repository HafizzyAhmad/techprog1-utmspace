#include <stdlib.h>
#include <stdio.h>

int main()
{
	float feh, cel;
	
	feh = -1000.0;
	
	
	tag:
	
	cel = (feh-32.0)*(5.0/9.0);
	
	printf("\n %f fahrenheit = %f Celcius \n", feh,cel );
	feh = feh + 1.0;
	if
	(
		feh <= 1000.00
	)
	
	goto tag;
	
	return 0;

}



