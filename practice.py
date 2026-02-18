with open("example1.txt","r")as f:
    chunk=""
    for line in f:
        for char in line:
            if char =="\n":
                continue
            chunk=chunk+char

            if len(chunk)==3:
                print(chunk.replace(" ",""))
                chunk=""
    if chunk:
        print(chunk)

        # end program