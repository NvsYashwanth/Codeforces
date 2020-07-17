a=[int(x) for x in input().split()]
s=input()
t=0
for i in s:
    if i=='1':
        t+=a[0]
    elif i=='2':
        t+=a[1]
    elif i=='3':
        t+=a[2]
    else:
        t+=a[3]
print(t)