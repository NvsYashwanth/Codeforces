n=int(input())
crimes=[int(x) for x in input().split()]

t,a=0,0
if crimes[0]==-1:
    t+=1
else:
    a+=crimes[0]
for i in range(1,n):
    if crimes[i]==-1:
        if a>0:
            a-=1
        else:
            t+=1
    else:
        a+=crimes[i]

    
print(t)