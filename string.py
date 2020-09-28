s=input()
strn=""
result=""
for i in range(len(s)):
    if i%2!=0:
        strn+=s[i].upper()
    else:
        strn+=s[i].lower()

l=len(strn)//2
str=strn[:l]
end=strn[l:][::-1]
for i in range(l):
    result+=str[i]
    result+=end[i]
print(result)