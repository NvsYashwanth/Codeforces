n,m=list(map(int, input().split()))
chests=list(map(int, input().split()))
keys=list(map(int, input().split()))

ec=oc=0
for i in chests:
    if i%2==0:
        ec+=1
    else:
        oc+=1

ek=ok=0
for i in keys:
    if i%2==0:
        ek+=1
    else:
        ok+=1

    
ans=min(ek,oc)+min(ec,ok)

print(ans)