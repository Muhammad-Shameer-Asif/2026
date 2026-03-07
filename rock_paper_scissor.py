import random as rnd

user_input=input("whats your : ").lower()
computer=rnd.choice(("rock","paper","scissor"))

print(f"Computer choose: {computer}")
print(f"You choose : {user_input}")

if(computer==user_input):
    print("Draw the match")
elif(computer=="rock" and user_input=="paper"):
    print("You Win")
elif(computer=="rock" and user_input=="scissor"):
    print("You lose")
elif(computer=="paper" and user_input=="rock"):
    print("You lose")
elif(computer == "paper" and user_input=="scissor"):
    print("You win")
elif(computer=="scissor" and user_input == "rock"):
    print("You win")    
elif(computer=="scissor" and user_input=="paper"):
    print("You lose")
else:
    print("something went wrong")    