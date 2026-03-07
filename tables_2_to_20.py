with open ("poen.txt","w+")as f:
    for table in range(2,21):
        for i in range(1,11):
            f.write(f"{table}x{i}={table*i}\n")
        f.write("\n")    