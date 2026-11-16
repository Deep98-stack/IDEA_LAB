number_of_students = 5
number_of_subjects = 3
maximum_marks = number_of_subjects * 100

highest_student = ""
highest_total = 0

for student_number in range(1, number_of_students + 1):
    name = input(f"\nEnter the name of student {student_number}: ")
    marks = list(
        map(
            int,
            input("Enter marks in 3 subjects: ").split()
        )
    )

    total = sum(marks)
    percentage = (total / maximum_marks) * 100

    if percentage >= 90:
        grade = "A"
    elif percentage >= 75:
        grade = "B"
    elif percentage >= 60:
        grade = "C"
    elif percentage >= 40:
        grade = "D"
    else:
        grade = "F"

    print(f"\nResult of {name}:")
    print(f"Total marks: {total}/{maximum_marks}")
    print(f"Percentage: {percentage:.2f}%")
    print("Grade:", grade)

    if total > highest_total:
        highest_total = total
        highest_student = name

highest_percentage = (highest_total / maximum_marks) * 100
print(f"\nStudent with the highest percentage: {highest_student}")
print(f"Highest percentage: {highest_percentage:.2f}%")
