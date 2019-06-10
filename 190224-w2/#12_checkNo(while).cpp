#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int num, total, multiply, highest, lowest,repeat;
	total=0;
	multiply=1;
	highest=-999999;
	lowest=999999;
	repeat=1;

	while(repeat==1)
	{
		printf("\nCheck the number: ");
		scanf("%d",&num);

		total=total+num;
		multiply=multiply*num;

		if (highest<num) highest=num;

		if (lowest>num) lowest=num;


		printf("Please enter <1> to repeat: ");
		scanf("%d", &repeat);

	}
	
	printf("\nThe Total is %d\n", total);
	printf("The Multiplaction is %d\n", multiply);
	printf("The Highest Number is %d\n", highest);
	printf("The lowest Number is %d\n\n", lowest);

	
	return 0;
	
	
}



