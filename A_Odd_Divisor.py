def fun():
    n=int(input())
    
    if n&(n-1):
        print('YES')
    else :
        print('NO')




t=int(input())
while t:
    fun()
    t=t-1