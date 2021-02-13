from array import *
arr=array('i',[])
for i in range(1000):
    if i=="\0":
        break
    else:
        n=input()
        n.append(arr[i])
print(arr)