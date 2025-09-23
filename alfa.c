#include <stdio.h>

int main () {
    char i = 'a';
    for (; i < 'z'; i+=4)
    {
       printf("%c ", i);
       
    }
    
    return 0;
}