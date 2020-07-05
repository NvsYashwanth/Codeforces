g=int(input())
c=0
for i in range(g):
    p,v,t=[int(x) for x in input().split()]
    if p+v+t>=2:
        c+=1
print(c)