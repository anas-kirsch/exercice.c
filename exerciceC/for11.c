#include <stdio.h>
#include <stdlib.h>

int main(){ //choisir le deuxieme nombre pair du tableau , exo matin

    int tab1[10]= {7,3,4,5,1,8,3,5,2,10};
    int pair= tab1[0];
    int compteur=0;  

    for(int i=0; i< 10; i++){  

        if (tab1[i] % 2 == 0){
            pair = tab1[i];
            compteur++;
        }
        if (compteur == 2){
        
        printf("le deuxieme nombre pair est %d\n", pair);
        break;

        }
                     
    }


    return 0;
}






