tests=int(input())

for i in range(tests):
    n=int(input())
    p=[int(x) for x in input().split()]
    found="NO"
    for i in range(1,n-1):
        if p[i]>p[i-1] and p[i]>p[i+1]:
            found="YES"
            print("YES")
            print(i,i+1,i+2)
            break
    if found=="NO":
        print("NO")