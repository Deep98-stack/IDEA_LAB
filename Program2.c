#include <stdio.h>

int main() {
    int principle, rate, time;

    printf("Enter the principle amount: ");
    scanf("%d", &principle);

    printf("Enter the rate of interest: ");
    scanf("%d", &rate);

    printf("Enter the time period: ");
    scanf("%d", &time);

    printf("Simple interest: %d\n", (principle * rate * time) / 100);

    return 0;
}
