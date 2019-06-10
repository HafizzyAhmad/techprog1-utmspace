#include <stdio.h>

int main ()

{

int x, y;

x = 3;
y = ++x;

printf("\nx=%d   y=%d",  x, y);

y = x++;
printf("\nx=%d    y=%d",  x, y);
	
return 0;

}
