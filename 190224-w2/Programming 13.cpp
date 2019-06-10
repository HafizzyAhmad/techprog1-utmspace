#include <stdio.h>

int main()
{

int A, B, C;

	printf("Please Enter Three Number : ");
scanf("%d%d%d", &A, &B, &C);

if ( A > B)

{
	if(A > C)
		printf("Nombor Terbesar A = %d", A);
	
	else
		printf("Nombor Terbesar C = %d", C);
}
	else
{
	
	if (B > C)
		printf("Nombor Terbesar B = %d", B);
			
	else 
		printf("Nombor Terbesar C = %d", C);

 }

return 0;

}
