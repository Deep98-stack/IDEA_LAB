
#include<iostream>

using namespace std;

int main() {
    const int numberOfStudents = 5;
    const int numberOfSubjects = 3;
    const int maximumMarks = numberOfSubjects * 100;

    string name;
    string highestStudent;
    int highestTotal = 0;

    for (int i = 1; i <= numberOfStudents; i++) {
        int marks1, marks2, marks3;
        int total;
        double percentage;
        char grade;

        cout << "\nEnter the name of student " << i << ": ";
        cin >> name;

        cout << "Enter marks in 3 subjects: ";
        cin >> marks1 >> marks2 >> marks3;

        total = marks1 + marks2 + marks3;
        percentage = (static_cast<double>(total) / maximumMarks) * 100;

        if (percentage >= 90) {
            grade = 'A';
        } else if (percentage >= 75) {
            grade = 'B';
        } else if (percentage >= 60) {
            grade = 'C';
        } else if (percentage >= 40) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        cout << "\nResult of " << name << ":\n";
        cout << "Total marks: " << total << "/" << maximumMarks << endl;
        cout << fixed << setprecision(2);
        cout << "Percentage: " << percentage << "%\n";
        cout << "Grade: " << grade << endl;

        if (total > highestTotal) {
            highestTotal = total;
            highestStudent = name;
        }
    }

    cout << "\nStudent with the highest percentage: " << highestStudent << endl;
    cout << "Highest percentage: "
         << fixed << setprecision(2)
         << (static_cast<double>(highestTotal) / maximumMarks) * 100
         << "%" << endl;

    return 0;
}
