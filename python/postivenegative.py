#get the value from user
print ("Program to find positive or negative number")
val = float(input("Enter a positive or negative number:"))

#if the value is greater than zero then it is a positive number
#or it is a negative number

if val > 0:
    print ("You have entered a positive number")
elif val < 0:
    print ("You have entered a negative number")
else:
    print ("You have entered zero")
