with open("Example3.txt","a+")as file:
    print("initial {}".format(file.tell()))
    data=file.read()
    if not data:
        print("NO data bro sorry")
    else:
        print(data)

    file.seek(0,0)
    print("\nnew {}".format(file.tell()))
    data=file.read()
    if not data:
        print("NO data bro ")
    else:
        print(data)
    print("end {}".format(file.tell()))