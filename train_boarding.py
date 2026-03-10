import random as rnd
class train():
      def __init__(self,trainNo):
            self.trainNo=trainNo
       
      def book_ticket(self,fro,to):
            print(f"you ticket {self.trainNo} is booked from {fro} to {to}")

      def status(self):
            seatNo=rnd.randint(1,50)
            print(f"the train {self.trainNo} is read to go and you seat number is {seatNo}")

      def fare(self,fro ,to):
            fa=rnd.randint(222,5555)
            print(f"the far of from {fro} to {to} are these {fa}")

shameer=train(123)
shameer.book_ticket("islamabad","Lahore")
shameer.status()
shameer.fare("islamabad","Lahore")

