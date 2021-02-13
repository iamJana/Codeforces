n=int(input())
odd=0
even=0
for i in range(1,n+1):
    if i%2==0:
        odd=odd+i
    else:
        even=even+i

result=odd-even
print (result)
