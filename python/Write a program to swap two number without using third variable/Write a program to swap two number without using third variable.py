        # Write a program to swap two number without using third variable.

A=int(input("Enter a value: "))
B=int(input("Enter a value: "))

print("Before swapping the number |A={}| , |B={}| ".format(A,B))

A, B = B, A

print("After swapping the number |A={}| , |B={}| ".format(A,B))
