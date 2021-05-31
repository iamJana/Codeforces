def fun():
    a, b = [int(x) for x in input().split()]
    x=a
    y=b
    count = 0
    for i in range(1, a):
        if x == 0:
            return count
            break
        elif x != b:
            a = a//b
            count = count+1
        else:
            b = b+1
            count = count+1


t = int(input())
while t:
    print(fun())
    t = t-1
