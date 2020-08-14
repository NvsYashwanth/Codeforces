
t=int(input())

for i in range(t):
    a,b,c,d,k=list(map(int,input().split()))
    x=y=1
    while(x*c<a):
        x+=1
    
    while(y*d<b):
        y+=1

    if x+y<=k:
        print(x,y)
    else:
        print(-1)
    
