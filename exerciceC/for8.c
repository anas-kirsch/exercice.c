#include <stdio.h>

int main() {//choisir le plus grand nombre du tableau
    int tab1[6] = {-18,137,1222,13,90,5}; //note 
    int i = 0 ;
    int max = tab1[i];


    for (int i = 0; i<6 ; i++) {

        if (tab1[i]> max)
        {
            max = tab1[i]; 
        } 

    }
            printf("%d est le plus grand\n", max);
  
      return 0;
}
