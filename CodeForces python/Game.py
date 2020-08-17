n=int(input())

x=list(map(int,input().split()))
l=0
r=n-1
x.sort()

state=1
i=1
while(i<n):
    if state==1:
        r-=1
        state=0
    else:
        l+=1
        state=1
    i+=1
print(x[l])
