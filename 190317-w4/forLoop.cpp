#include <stdio.h>

int main()
{
    int x,y;

    for (x=1;x<=3;x++)
        for(y=1;y<=3;y++)
            printf("\n%d\t%d\t%d\n", x,y,x*y);


    return 0;

}