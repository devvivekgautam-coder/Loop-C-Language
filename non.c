#include<stdio.h>

int main () {

    int n;

    printf("Enter Any Number :");
    scanf("%d", &n);

    int i  = 1;

    while (n >= 1) {
        if (n % 2 == 1)  {
            printf("The Number Is Odd...");
            printf("%d \n", n);
        }
        else {
            printf("The Number Is Even..");
            printf("%d \n", n);
        }

        n--;
    }
    
    return 0;
}