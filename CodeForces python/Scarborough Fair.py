n,m=list(map(int,input().split()))
s=input()
z=list(s)
for i in range(m):
    l,r,c1,c2=input().split()
    l=int(l)
    r=int(r)
    for i in range(l-1,r):
        if z[i]==c1:
            z[i]=c2
print("".join(z))
