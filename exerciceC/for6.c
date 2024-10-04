#include <stdio.h>
//2/10
int main() { // donner les nombres pairs et impairs du tableau  +  et multiplie chaque nombre a chaque i++
   
    int note[6]={2,3,8,7,5,13};
    int produit = 1;

        for(int i =0; i<6;i++ ){
          //  printf("%d\n",note[4]);

        produit= produit * note[i];
        

        if (note[i] % 2 == 0)
        {
            printf("%d est pair\n ",note[i]);
        }

        else if (note[i] % 2 == 1)
        {
            printf("%d est impair\n",note[i]);
        }      

        }

       printf("produit : %d\n",produit);
    return 0;

        }
