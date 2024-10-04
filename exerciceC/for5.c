#include <stdio.h>

int main() { // faire la somme des elements
    int note[3]={5,10,6};
    int somme = 0;
 
    for(int i = 0;i<3;i++){
       // printf("%d\n",note[3]);
   
    somme= somme + note[i];
    }

    printf("%d\n ",somme);


    return 0;
}
