#include <stdio.h>

int *soluzione;
int main(){
    FILE *fileinp, *fileout;
    fileinp = fopen("data.dat","r");
    fileout = fopen("data.out","w");

    int sales[5][4], ind1, ind2, jumlahbar[5], jumcol[5];
    float avgbar[5];

    fprintf(fileout,"SALES ANALYSIS\n\n");
    fprintf(fileout,"Q1\tQ2\tQ3\tQ4\tTOTAL\tAVERAGE\tQ4\n\n");
    fprintf(fileout,"==================================================\n");


    //Kira jumlah dan average baris 

    for(ind1=0;ind1<5;ind1++){
        jumlahbar[ind1] = 0;
        for(ind2=0;ind2<4;ind2++){
            fscanf(fileinp,"%d", &sales[ind1][ind2]);
            jumlahbar[ind1] = jumlahbar[ind1] + sales[ind1][ind2];
        }
        avgbar[ind1] = float(jumlahbar[ind1]/ind2);
        fscanf(fileinp,"\n"); 
    }

    // kira jumlah dan average column

    for(ind2=0;ind2<4;ind2++){
        jumcol[ind2]=0;
        for(ind1=0;ind1<5;ind1++){
            





        }
    }

    for(ind1=0;ind1<5;ind1++){
        for(ind2=0;ind2<4;ind2++){
            fprintf(fileout,"%4d", sales[ind1][ind2]);
            fprintf(fileout,"%7d %0.3f\n", jumlahbar[ind1],avgbar[ind1]);
        }
        
    }

    return 0;

}