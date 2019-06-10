#include <stdio.h>
#include <math.h>
 
int main()
{
 
    float radius, height;
    float diameter, perimeter, baseArea, lateralSurface, surface_area, volume ;
 
    printf("Enter  value for  radius of a cylinder :");
    scanf("%f", &radius);

    printf("Enter  value for height of a cylinder :");
    scanf("%f",&height);   

    diameter = 2*radius;
    perimeter = 2*(22/7)*radius;
    baseArea = (22/7)*radius*radius;
    lateralSurface = 2*(22/7)*radius*height;
    surface_area = 2 * (22 / 7) * radius * (radius + height);
    volume = (22 / 7) * radius * radius * height;

    printf("\nDiameter of cylinder is: %.3f", diameter);
    printf("\nPerimeter of cylinder is: %.3f", perimeter);
    printf("\nBase Area of cylinder is: %.3f", baseArea);
    printf("\nLateral Surface of cylinder is: %.3f", lateralSurface);
    printf("\nSurface area of cylinder is: %.3f", surface_area);
    printf("\nVolume of cylinder is : %.3f\n", volume);

    return 0;
} 

