n=list(input())
m=list(input())
res=[]
for i in range(len(n)):
    if n[i]!=m[i]:
        res.append(1)
    else:
        res.append(0)
for i in res:
    print(i,end="")