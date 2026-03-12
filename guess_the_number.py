import random as rnd
print("You need to guess a number .... lets start it ")
comp_num=rnd.randint(1,100)

def guess():
  num=input("Enter a number between (1-100) : ")    
  if (int(num) > int(comp_num)):
      print("Too high")
      
  elif(int(num) < int(comp_num)):
      print("Too low")
  elif(int(num)==int(comp_num)):
      print("Congratulation ")
  if (int(num)!=int(comp_num)):
      guess()
      
guess()      

