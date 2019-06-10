#include<stdio.h>

int main(){
    int INDEX = 10;
    int arraySize[INDEX], ind, total, lowest, highest;
    float average;

    for (ind = 0; ind < INDEX ; ind=ind+1){
        printf("Enter Number %d ==> ",ind+1);
        scanf("%d", &arraySize[ind]);
    }

    total = 0;

    for(ind=0; ind <INDEX; ind=ind+1)
        total = total + arraySize[ind];
        average = total/INDEX;
        lowest = arraySize[0];
        highest = arraySize[0];

        for(ind = 1; ind<INDEX; ind = ind+1){
            if(lowest>arraySize[ind]) 
            lowest = arraySize[ind];

            if(highest<arraySize[ind])
            highest = arraySize[ind];

        }

        printf("Total Number = %d\n", total);
        printf("Average Number = %f\n", average);
        printf("Lowest Number = %d\n", lowest);
        printf("Highest Number = %d\n", highest);

        return 0;


}
