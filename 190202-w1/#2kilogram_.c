#include<stdio.h>
#include<math.h>

int main()

{
    //harga epal sekilo (x) = RM3.40
    float amount, cost, total;

    printf("\n\nPlease enter kilogram of purchase (Kg):");
    scanf("%f", &amount);

    printf("\nPlease insert cost per kilogram (RM):");
    scanf("%f", &cost);

    total=amount*cost;

    printf("\nThe total to be paid is RM %0.2f\n\n", total);

    return 0;

}
