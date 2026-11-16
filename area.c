#include <stdio.h>

int main() {
    int length, breadth;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    printf("Area of rectangle: %d\n", length * breadth);
    printf("Perimeter of rectangle: %d\n", 2 * (length + breadth));

    return 0;
}
