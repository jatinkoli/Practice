import random, string
password_length = int(input("length of the password"))
password_characters = (string.ascill_letters + string.digits + string.punctuatio)
password = []
for x in range(password_length):
     password.append(random.choicen(password_characters))
print(" ".join(password))






