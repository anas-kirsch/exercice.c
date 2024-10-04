#include <stdio.h>

int main(){
    // multipli deux valeurs 
    int a;
    int b = 9;
    int c;
   
    for(a = 0 ; a != 11; a++){

        c = a * b;
        printf("%d * %d = %d\n", a , b , c);

    }
    

    return 0;
}