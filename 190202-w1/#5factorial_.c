#include <stdio.h>

int main()
{
    int n, index, factorial;   //Ni untuk integer and index number
    factorial = 1;
    index =1;

    printf("\n\n\nEnter an integer:");
    scanf("%d", &n);

    //Shows and error bila user masukkan negative value

    if (n<0)
        printf("ERROR! Please enter positive value");

    else
    {
    	factorial = 1;
   		index =1;
   		
   		
        a:
        factorial = factorial*index;
        index = index+1;

        if (index<=n) goto a;

        printf("\nThe Factorial Value is: %d\n\n", factorial);// test je
    
    }
    
    return 0;
}
