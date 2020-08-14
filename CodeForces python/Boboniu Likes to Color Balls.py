tests=int(input())

for i in range(tests):

    odds=0
    evens=0
    colors=[int(x) for x in input().split()]
    
    for x in colors[:-1]:
        if x%2==0:
            evens+=1
        else:
            odds+=1


    m=min(colors[:-1])

    k=0
    while(odds>1 and k!=m):
        k+=1
        evens,odds=odds,evens

        

    colors[3]+=k*3
    if colors[3]%2!=0:
        odds+=1


    if odds<=1:
        print('Yes')
    else:
        print('No')