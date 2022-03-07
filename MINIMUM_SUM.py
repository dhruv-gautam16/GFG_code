for t in range(int(input())):
    (a,b)=map(int,input().split())
    if a>=b:
        print(a-b)
    elif (b==(a|b)):
        print(1)
    elif (b==a+1):
        print(1)
    elif (b==((a+1)|b)):
        print(2)
    elif (a+2==b):
        print(2)
    elif ((b-1)==(a|(b-1))):
        print(2)
    elif ((b+1)==(a|(b+1))):
        print(2)
    else:
        print(3)