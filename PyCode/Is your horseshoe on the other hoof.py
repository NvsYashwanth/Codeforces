n=[int(x) for x in input().split()]
c=0
z=len(n)
d={}
for i in range(z):
    if d.get(n[i])==None:
        d[n[i]]=1
    else:
        c+=1
print(c)