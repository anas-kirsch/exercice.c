#include <stdio.h>

int main() { // pair et imapir egalement 

    int a = 0;

    while (a < 100)
{   a++;
    if (a % 2 == 0)
    {
        printf("%d est pair\n",a);
    }
    if ( a % 2 != 0)
    {
        printf("%d est impair\n",a);
    }
    
}



    return 0;
}





