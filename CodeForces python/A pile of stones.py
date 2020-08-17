n=int(input())
s=input()

res=0
for i in s:
    if i=='-':
        res-=1
    else:
        res+=1
    if res<0:
        res+=1


if res<0:
    print(0)
else:
    print(res)
    