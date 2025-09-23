// #include <stdio.h>

// int main () {
//     int i = 10;

//     while (i >= 1)
//     {
//         printf("%d ", i);
//         i--;
//     }

//     return 0;

// }

// #include <stdio.h>

// int main () {

//     int i = 1;

//     while (i <= 10)
//     {
//         printf("%d ", i);
//         i++;
//     }

//     return 0;
// }

// #include<stdio.h>

// int main () {

//     int i , n, sum;

//     printf("Enter Any Number :");
//     scanf("%d", &n);

//     for (i = 1;i <=n; i++)
//     {
//        sum  = sum + i;
//     }
//     printf("Sum Of Number Is :%d" ,sum);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int fact = 1, n, i;

//     printf("Enter Any Number:");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }

//     printf("Factorial of %d\n", fact);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int num, i;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     for (i = 1; i <= 10; i++)
//     {
//         printf("%d x %d = %d\n", num, i, num * i);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n, i;
//     int fact = 1;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }

//     printf("Factorial = %d\n", fact);
//     return 0;
// }

// 


// #include <stdio.h>

// int main () {
//     int num, i;

//     printf("enter a number: ");
//     scanf("%d", &num);

//     for (i = 1; i <= 10; i++)
//     {
//        printf("%d x %d = %d\n", num, i, num * i);
//     }
    
//     return 0;
// }


// #include <stdio.h>

// int main () {

//     int num, i = 1;

//     printf("Enter a number : ");
//     scanf("%d",&num);

//     do
//     {
//         printf("%d x %d = %d\n", num, i, num * i);
//         i++;
//     } while (i <= 10);
    
//     return 0;
// }


// #include <stdio.h>

// int main () {
//     int num, fact = 1, i = 1;

//     printf("Enter a number : ");
//     scanf("%d", &num);

//     while (i <= 10)
//     {
//         printf("%d x %d = %d\n", num, i, num * i);
//         i++;
//     }
    
//     return 0;
// }


// #include <stdio.h>

// int main () {
//     int fact = 1, i = 1, num;

//     printf("Enter a number : ");
//     scanf("%d", &num);

//     do
//     {
//         fact = fact * i;
//         i++;
//     } while (i <= num);
    
//     printf("Factorial is : %d", fact);

//     return 0;
// }
// 


// #include <stdio.h>

// int main () {
//     int fact = 1, i, num;

//     printf("Enter a number : ");
//     scanf("%d", &num);

//     for (i = 1 ; i <= num; i++)
//     {
//         fact = fact * i;
//     }
    
//     printf("Factorial is : %d", fact);
//     return 0;
// }   


// Sum Of digits programe

// #include <stdio.h>

// int main () {

//     int num, sum = 0, rem;

//     printf("Enter a number : ");
//     scanf("%d", &num);

//     for (; num > 0; num = num / 10)
//     {
//         rem = num % 10;
//         sum = sum + rem;
//     }
    
//     printf("Sum Of Digits Is : %d", sum);

//     return 0;
// }

