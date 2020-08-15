n=int(input())
d={}

for i in range(n):
    s=sum(list(map(int, input().split())))
    if i+1==1:
        rank=1
    else:
        if s>d[1]:
            rank+=1
    d[i+1]=s
print(rank)

