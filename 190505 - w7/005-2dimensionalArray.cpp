void showArray(int array[]cols[], int row){
    for (int x = 0 ; x < row ; x++){
        for(int y = 0 ; y < cols ; y++){
            printf ("%4d ", array[x][y]);
        }
    }
    printf ("\n");
}

#include <stdio.h>

int main(){
    int table1 [TAB1_ROWS][COLS] = {{1 , 2 , 3 , 4},{5 , 6 , 7 , 8}, {9 , 10 , 11 , 12}};
    int table2 [TAB2_ROWS][COLS] = {{10 , 20 , 30 , 40},{50 , 60 , 70 , 80},{90 , 100 , 110 , 120},{130 , 140 , 150 , 160}};
}


