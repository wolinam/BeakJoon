ssu, korea, hanyang = map(int,input( ).split())

sum = int(ssu+korea+hanyang)
if sum >= 100:
    print("OK")
else:
    if ssu<korea and ssu < hanyang:
        print("Soongsil")
    elif korea<ssu and korea <hanyang:
        print("Korea")
    elif hanyang<ssu and hanyang<korea:
        print("Hanyang")
        
