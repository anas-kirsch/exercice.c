#include <stdio.h>
#include <math.h>

int main() {

    int a = 13; // celui qu'on multiplie
    int b = 0; // multiplie par b
    int produit = 0; // produit

    while (b < 10){ // b =0
        b++; //b = 1
        produit = a * b;// 13 * 1
        printf("%d x %d = %d\n",a,b, produit);
    }
    


    return 0;
}
