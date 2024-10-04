#include <stdio.h>
#include <stdlib.h>

int main() { // choisir le nombre le plus petit d'un tableau
    int tab1[6] = {-18,-137,12,13,90,500}; //note 
    int min = tab1[0];
    
    for (int i = 0; i<6 ; i++) {
        if( tab1[i]< min ){   
            min = tab1[i];
        }
    }

        printf("%d est le plus petit\n",min);
  

    return 0;
}
