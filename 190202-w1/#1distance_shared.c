#include<stdio.h>
#include<math.h> //sqrt function untuk kira

int main()
{
    float x1,y1,x2,y2, lengx, lengy, dist;
    printf("Please enter X1:");
    scanf("%f",&x1);

    printf("Please enter Y1:");
    scanf("%f",&y1);

    printf("Please enter X2:");
    scanf("%f",&x2);


    printf("Please enter Y2:");
    scanf("%f",&y2);

    lengx = x2-x1;
    lengy = y2-y1;

    dist = sqrt((lengx*lengx)+(lengy*lengy));

    printf("The distance is = %f\n\n",dist);

    return 0;

}

//reference: https://www.youtube.com/watch?v=suASs-89AJQ
