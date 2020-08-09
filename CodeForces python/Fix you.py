tests=int(input())

for i in range(tests):
    n,m=list(map(int,input().split()))
    edge_down=[]
    edge_right=[]
    for i in range(n):
        x=input()
        edge_right+=x[-1]
        if i==n-1:
            edge_down+=x

    c=0
    for i in edge_down:
        if i=='D':
            c+=1
    for i in edge_right:
        if i=='R':
            c+=1
    # print(edge_down,edge_right,c)
    print(c)
