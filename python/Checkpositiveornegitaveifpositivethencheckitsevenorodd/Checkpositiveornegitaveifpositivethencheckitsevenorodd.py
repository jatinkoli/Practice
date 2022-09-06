a = int(input("Enter Number:  "))

if a > 0:
    if a%2:
        print("Number is odd Positive")
    else:
        print("Number is even Positive")
elif a < 0:
    print("Number is negative")
else:
    print("The number you have enter is zero")