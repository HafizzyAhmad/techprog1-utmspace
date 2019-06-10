#include <stdio.h>

double F_to_C (double degreesF); //declare function kat bawah

int main ()
{
    double degF, degC;
	printf("Enter degrees F: ");
	scanf("%lf", &degF);

	degC = F_to_C (degF); //hantar value degF ke dalam function bawah

	printf("%f degrees F are %f degrees C\n", degF, degC);
}

double F_to_C (double degF)  //variable can be different from top
{
	const double ratio = 5.0 / 9.0;	
	return (degF-32)*ratio; // ni nak return masuk dalam main program
}