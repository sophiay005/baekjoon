a, b = map(int,input().split())

if(0<=a and a<=23 and 0<=b and b<=59):
        if (b>=45):
            print(a, b-45)
        elif (b<45):
            if (a-1>=0):
                print(a-1, b+15)
            else:
                print(23, b+15)