#include <stdio.h>
#include <math.h>

int main() {
//somme nombre jusqu'a 67
    int a = 0;
    int b = 0;
    int n = 67;

    while (a != n)
    {
        printf("%d\n", a);
      
        a = a + 1;
        b = b + a;

    }
        printf("la somme de %d ses nombres est = %d\n",n,b);

    


    return 0;
}





