                    #Program based on table


num = int(input("Enter the number for table you want: "))

j = 1

while j <= 12:
    a = j*num
    print("{} X {} = {}".format(num, j, a))
    j = j + 1
