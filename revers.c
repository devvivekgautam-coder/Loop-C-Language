#include <stdio.h>

int main() {
    int num, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (; num > 0; num = num / 10) {
        rem = num % 10;          
        rev = rev * 10 + rem;   
    }

    printf("Reversed number = %d\n", rev);

    return 0;
}
