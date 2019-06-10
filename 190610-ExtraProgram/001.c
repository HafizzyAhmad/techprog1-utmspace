#include <stdio.h> 

int main(){

    int m, n, p, q, c, d, k, sum = 0;
    int m1[10][10], m2[10][10], m3[10][10];

    printf("Please enter the number of rows of 1st matrix\n");
    scanf("%d", &m);
    printf("Please enter number of columns of 1st matrix\n");
    scanf("%d", &n);
    printf("Please enter the elements of 1st matrix one by one\n");

    for (  c = 0 ; c < m ; c++ ){
        for ( d = 0 ; d < n ; d++ ){
            scanf("%d", &m1[c][d]);
        }
    }    

    printf("Please enter the number of rows of 2nd matrix\n");
    scanf("%d", &p);
    printf("Please enter number of columns of 2nd matrix\n");
    scanf("%d", &q);

    if ( n != p ){

        printf("The entered matrices can't be multiplied each other.\n");
        printf("To multiply two matrices of X and Y, the number of columns in X must be equal to the number of rows in Y");

    }

    else{
        printf("Please enter the elements of 2nd matrix one by one\n");
        for ( c = 0 ; c < p ; c++ )
        for ( d = 0 ; d < q ; d++ )
        scanf("%d", &m2[c][d]);
        for ( c = 0 ; c < m ; c++ ){
            for ( d = 0 ; d < q ; d++ ){
                for ( k = 0 ; k < p ; k++ ){
                    sum = sum + m1[c][k]*m2[k][d];
                }
                m3[c][d] = sum;
                sum = 0;

            }

        }

        printf("Multiplication of entered matrices:\n");

        for ( c = 0 ; c < m ; c++ ){
            for ( d = 0 ; d < q ; d++ )
            printf("%d\t", m3[c][d]);
            printf("\n");
        }

    }

    return 0;

}