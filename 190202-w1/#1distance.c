#include<stdio.h>
#include<math.h> //sqrt function untuk kira

int main()
{
    int x1,y1,x2,y2;
    float d;

    printf("Ënter first point:");
    scanf("%d%d",&x1,&y1);
    printf("Ënter first point:");
    scanf("%d%d",&x2,&y2);

    d=(float)sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

    printf("distance=%f",d);

    return 0;

}

//reference: https://www.youtube.com/watch?v=suASs-89AJQ