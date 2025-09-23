#include <stdio.h>

int main () {
    int start, end, sum = 0, i;

    printf("Enter The Start No :");
    scanf("%d", &start);
    
    printf("Enter The Ending No :");
    scanf("%d", &end);

    for ( ; start <= end; start++) // (i = start; start <= end; start++)  we can replace with this.
    {   
        sum = sum + start;
    }
    printf("Sum Of No :%d", sum);
    
    return 0;
}