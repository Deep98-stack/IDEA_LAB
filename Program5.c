#include <stdio.h>
#include <string.h>

int main() {
    char name[50], highestStudent[50] = "";
    int m1, m2, m3, total, highestTotal = -1;

    for (int i = 1; i <= 5; i++) {
        printf("\nEnter the name of student %d: ", i);
        scanf("%s", name);
        printf("Enter marks in 3 subjects: ");
        scanf("%d %d %d", &m1, &m2, &m3);

        total = m1 + m2 + m3;
        double percentage = (total / 300.0) * 100.0;
        char grade = (percentage >= 90) ? 'A' : (percentage >= 75) ? 'B' : (percentage >= 60) ? 'C' : (percentage >= 40) ? 'D' : 'F';

        printf("\nResult of %s:\n", name);
        printf("Total marks: %d/300\nPercentage: %.2f%%\nGrade: %c\n", total, percentage, grade);

        if (total > highestTotal) {
            highestTotal = total;
            strcpy(highestStudent, name);
        }
    }

    printf("\nStudent with the highest percentage: %s\n", highestStudent);
    printf("Highest percentage: %.2f%%\n", (highestTotal / 300.0) * 100.0);

    return 0;
}
