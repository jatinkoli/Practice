        # Write a program to swap two number with using third variable.

A=int(input("Enter a value: "))
B=int(input("Enter a value: "))

print("Before swapping the number |A={}| , |B={}| ".format(A,B))

C=A
A=B
B=C

print("After swapping the number |A={}| , |B={}| ".format(A,B))
