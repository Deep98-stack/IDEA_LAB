number = int(input("Enter a number to print its multiplication table: "))

print("Multiplication Table of", number, ":")
for multiplier in range(1, 11):
    print(number, "x", multiplier, "=", number * multiplier)
