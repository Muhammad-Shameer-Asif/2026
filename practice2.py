from random import randint as rnd

with open("members.txt", "w") as file:
    file.write("ID --- Date --- Status\n")
    for i in range(10):
        ID=rnd(1000,9999)
        day=rnd(1,31)
        month=rnd(1,12)
        year=rnd(2015,2030)
        status=rnd(0,1)
        date = str(day)+"/"+ str(month)+"/"+ str(year)

        if status==0:
          status="yes"
        else:
           status="NO"
        line=(str(ID)+"---"+str(date)+"---"+str(status)+"\n")
        file.write(line)
