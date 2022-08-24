                #Swapping Two Values
A= int (input ("Enter first number: "))
B= int (input ("Enter second number: "))
print("Before Swapping the Values= ", A, B)
C=A
A=B
B=C
print("After Swapping the Values= ",A,B)

                    #OR
A= int (input ("Enter first number: "))
B= int (input ("Enter second number: "))
print("Before Swapping the Values= ", A, B)
A=A+B
B=A-B 
A=A-B
print("After Swapping the Values= ",A,B)