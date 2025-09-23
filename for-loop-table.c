#include <stdio.h>

int main()
{

    int num, i;

    printf("Enter a number :");
    scanf("%d", &num);

    for (i = 10; i >= 1; i--) //(i = 1; i <= 10; i++) replace with this
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}