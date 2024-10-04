#include <stdio.h>

int main() { 
    
   int tab[7];
   
    for(int i=1;i<8;i++){
      tab[i] = i;
    }
    
    int somme = 0;
    for (int i = 0; i < 8; i++)
    {
       somme= somme+i;
     
    }
     printf("%d\n",somme);
    

    return 0;
}
