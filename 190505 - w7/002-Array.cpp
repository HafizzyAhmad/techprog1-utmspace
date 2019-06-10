#include <stdio.h>

int main(){
    int num [100], total,index, totalnum;
    float avg;

    printf("Enter Total Number");
    scanf("%d", &totalnum);


    for (index = 0; totalnum<5; index = index +1 ){
        printf("Please enter number %d: ", index+1);
        scanf("%d",&num[index]);
    }
    total = 0;

    for (index = 0; index < totalnum; index = index +1 ){
        total = total+num[index];
    }

    avg = total / float (totalnum);

    printf("total = %d", total);

    return 0;
}