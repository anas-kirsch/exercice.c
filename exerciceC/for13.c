#include <stdio.h>
#include <stdlib.h>

   
int main(){  //choisir le deuxieme nombre pair du tableau , exo matin

   int tab1[5]= {14,20,10,4,9};
   int compteur = 0;
   int compteur2= 0;
   int compteur3= 0;

        for (int i = 0; i < 5; i++)
        {
            if (tab1[i]<10)  // 1
            {
              compteur++;

            }
        
        
            if (tab1[i]==10) //2
            {
              compteur2++;
            }

            if (tab1[i]>10) //3
            {
              compteur3++;
            }
        }
        
              printf("il ya %d nombre < a 10\n", compteur);
              printf("il ya %d nombre = a 10\n", compteur2);
              printf("il ya %d nombre > a 10\n", compteur3);

    return 0;
}