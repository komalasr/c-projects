#include <stdio.h>

void factorial() {
    int n, i;
    unsigned long long factorial = 1;

    // Input a number
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check for negative input
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

//    return 0;
}
