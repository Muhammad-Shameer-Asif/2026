import random as rnd
a=input("Roll the dice (y or n) :")
if(a=="y" or a=="Y"):
    b=rnd.choice([1,2,3,4,5,6])
    c=rnd.choice([1,2,3,4,5,6])
    print(f"You rolled a {b} and a {c}")
elif(a=="n" or a=="N"):
    print("Thanks for playing")  
else:
    print("Invalid Choice")

