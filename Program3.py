num1, num2, num3 = map(float, input("Enter three decimal numbers: ").split())

if num1 >= num2 and num1 >= num3:
    if num1 == num2 and num1 == num3:
        print("All three numbers are equal:", num1)
    elif num1 == num2:
        print("The largest number is:", num1, "(equal to second number)")
    elif num1 == num3:
        print("The largest number is:", num1, "(equal to third number)")
    else:
        print("The largest number is:", num1)
elif num2 >= num1 and num2 >= num3:
    if num2 == num3:
        print("The largest number is:", num2, "(equal to third number)")
    else:
        print("The largest number is:", num2)
else:
    print("The largest number is:", num3)
