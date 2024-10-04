#include <stdio.h>
#include <math.h>

int main() {

    int nombre = 0;

    while (nombre <= 100)
    {
        nombre++;

        if (nombre % 3 == 0)
        {
          printf("fizz\n");
        }

        else if (nombre % 5 == 0)
        {
            printf("buzz\n");
        }
        
        printf("%d\n",nombre);
    }
     
    return 0;
}
