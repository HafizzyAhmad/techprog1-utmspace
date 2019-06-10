#include <stdio.h>

int main(){
    int num [5], total,index;

    for (index = 0; index<5; index ++){
        printf("Please enter number %d: ", index+1);
        scanf("%d",&num[index]);
    }
    total = 0;

    for (index = 0; index<5; index ++){
        total = total+num[index];
    }

    

    printf("Total: %d",total);

    return 0;

}