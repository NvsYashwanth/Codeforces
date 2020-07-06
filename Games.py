teams=int(input())
h={}
g={}
for i in range(teams):
    x,y=[int(x) for x in input().split()]
    if h.get(x)==None:
        h[x]=1
    else:
        h[x]+=1
    if g.get(y)==None:
        g[y]=1
    else:
        g[y]+=1

c=0
for i in h:
    try:
        c+=g[i]*h[i]
    except KeyError:
        pass

print(c)