list=[]
count =0
while True:
    a,b=map(int,input().split())
    list.append(a+b)
    count +=1
    if a==0 and b==0:
        break
list.pop(count-1)
for i in list:
    print(i)