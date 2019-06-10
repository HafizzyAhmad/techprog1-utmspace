#include <stdio.h>

int main ()

{

int Num, Total, Multiply, BiggestNumber, SmallestNumber, Repeat;

	Total = 0;
	Multiply = 1;
	BiggestNumber = -9999999;
	SmallestNumber = 9999999;
	Repeat = 1;

tag:
	
printf("Please Enter a Number : ");
scanf("%d", &Num);

Total = Total + Num;
Multiply = Multiply * Num;

if (BiggestNumber < Num) BiggestNumber = Num;

if (SmallestNumber > Num) SmallestNumber = Num;

printf("Please Enter <1> for Repeat : ");
scanf("%d", &Repeat);

if(Repeat ==1) goto tag;

printf("\nSummary Total = %d", Total);
printf("\nSummary Multiply = %d", Multiply);
printf("\nThe BiggestNumber = %d", BiggestNumber);
printf("\nThe SmallestNumber = %d", SmallestNumber);
	

	
return 0;

}
