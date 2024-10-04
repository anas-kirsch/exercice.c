#include <stdio.h>
#include <math.h>

int main() { // 


    float a = -10; 
    float quotient = 1;

      while ( a <= 50){
    
        if (a == 0){
        a = a + 1;
        }
        
        quotient = quotient / a;
        a = a + 1;
        
      
      }
        printf("le quotient  est = %f\n", quotient);


    return 0;
}


