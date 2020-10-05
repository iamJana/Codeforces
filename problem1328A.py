lst=[]
def res(a, b):
    temp = 0
   
    if a % b == 0:
        lst.append(0)
    else:
        a=a+1
        count = 0
        while temp!=1:
            if a % b == 0:
                temp = 1
            count = count + 1
            a = a + 1
        lst.append(count)


n=int(input())
for i in range(n):
    a,b=input().split()
    aa=int(a)
    bb=int(b)
    res(aa,bb)
for i in lst:
    print(i)
    

