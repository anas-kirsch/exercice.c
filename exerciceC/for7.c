#include <stdio.h>

int main() {
    int tab1[5] = {10,12,15,9,11}; //note 
    int tab2[5] = {1,2,1,3,8};// coef
    int tab3[5];// note coef
    int i = 0;

    for ( i = 0; i <= 4; i++)
    {
        tab3[i] = tab1[i] * tab2[i];
        printf("%d\n", tab3[i]);  
    }
    return 0;
}
