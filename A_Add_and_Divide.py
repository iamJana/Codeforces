def fun():
    a, b = [int(x) for x in input().split()]

    count = 0
    for i in range(1, a):
        if a == 0:
            return count
            break
        elif a != b:
            a = a//b
            count = count+1
        else:
            b = b+1
            count = count+1


t = int(input())
while t:
    print(fun())
    t = t-1
