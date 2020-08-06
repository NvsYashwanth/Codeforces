tests=int(input())

for i in range(tests):
    n=int(input())
    a=[int(x) for x in input().split()]
    if len(a)==1:
        print("YES")
        continue

    a.sort()
    s=sum(a)
    for i in range(1,len(a)):
        if a[i]-a[i-1]<=1:
            s-=a[i-1]
            a[i-1]=0
    if a[i]==s:
        print("YES")
    else:
        print("NO")

    