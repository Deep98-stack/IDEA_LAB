// Write a C/C++ program to accept three decimal numbers and find the largest number.
// Requirement: Use conditional statements and handle equal numbers.

#include <stdio.h>

int main() {
    double n1, n2, n3;

    printf("Enter three decimal numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3) {
        if (n1 == n2 && n1 == n3)
            printf("All three numbers are equal: %g\n", n1);
        else if (n1 == n2)
            printf("The largest number is: %g (equal to second number)\n", n1);
        else if (n1 == n3)
            printf("The largest number is: %g (equal to third number)\n", n1);
        else
            printf("The largest number is: %g\n", n1);
    } else if (n2 >= n3) {
        if (n2 == n3)
            printf("The largest number is: %g (equal to third number)\n", n2);
        else
            printf("The largest number is: %g\n", n2);
    } else {
        printf("The largest number is: %g\n", n3);
    }

    return 0;
}
