import random as rnd
class guess_number:
    def __init__(self,user_number=0,comp_number=0):
        self.user_number=user_number
        self.comp_number=rnd.randint(1,100)

    def game(self):
        i=1
        a=True
        while a==True:
         self.user_number=int(input("enter a number between (1,100) : "))
         if(self.user_number==self.comp_number):
               print("Congratulation You guess the number bro ")
               print(f"You guess the number in {i} attempts ")
               a=False
      
         elif(self.user_number>self.comp_number and self.user_number<100):
              print("You entered a higher number ")
              i+=1
         elif(self.user_number<self.comp_number and self.user_number>0):
              print("You entered a lower number ")
              i+=1
         elif(self.user_number<=0 or self.user_number>100):
              print("Invalid number")  
              i+=1



              
                    

shameer=guess_number()
shameer.game()