n,k=list(map(int,input().split()))

x=n*2
y=n*5
z=n*8

q=[x,y,z]

i=0
res=0
while(i!=3):
    res+=q[i]//k+(q[i]%k!=0)
    i+=1

print(res)
