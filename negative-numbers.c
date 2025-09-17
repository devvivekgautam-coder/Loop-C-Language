#include <stdio.h>

int main () {

    int n; 
    printf("Enter Any Number :");
    scanf("%d", &n);
    
    int i = 10;
    while (i >= 1) {
        printf("%d ", i);
        i--;
    }
    
    return 0;
}