#include <stdio.h>
#include <math.h>
 
int main()
{
 
    float radius, height;
    float surface_area, volume;
 
    printf("Enter  value for  radius of a cylinder :");
    scanf("%f", &radius);

    printf("Enter  value for height of a cylinder :");
    scanf("%f",&height);    

    //surface_area = 2 * (22 / 7) * radius * (radius + height);
    volume = (22 / 7) * radius * radius * height;

    //printf("Surface area of cylinder is: %.3f", surface_area);
    printf("\nVolume of cylinder is : %.3f\n\n\n", volume);


    return 0;
} 

