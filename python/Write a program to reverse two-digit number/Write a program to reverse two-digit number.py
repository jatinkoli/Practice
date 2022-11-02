            # Write a program to reverse two-digit number.


A=int(input("Enter any two digit number: "))

B = A % 10
C = int(A / 10)
D= (B * 10 + C)

print("The Reverse of|{}| is |{}|".format(A,D))
