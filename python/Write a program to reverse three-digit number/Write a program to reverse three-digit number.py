            # Write a program to reverse three-digit number.

a = int(input("Enter 3 digit number:  "))
b = a%10
c = int(a/10)
d = c%10
e = int(a/100)
j = (b*100+d*10+e)
print("The reverse of|{}| is |{}|".format(a,j))
