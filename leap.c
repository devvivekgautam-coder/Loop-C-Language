#include <stdio.h>

int main () {

    int a,b;

    printf("enter first year :");
    scanf("%d", &a);

    printf("enter last year :");
    scanf("%d", &b);

    while(b >= a) {
        if (a % 4 == 0) {

            if (a % 100 == 0) {
                if (a % 400 == 0) {
                    printf("leap year : %d\n", a);
                }
            }
            printf("leap year : %d\n", a);
        }
        a++;
    }
    
    return 0;
}