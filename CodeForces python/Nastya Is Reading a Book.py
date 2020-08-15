n=int(input())

z=[]
for i in range(n):
    z+=list(map(int, input().split())),
k=int(input())

for i in range(n):
    if z[i][0]<=k<=z[i][1]:
        break

print(n-i)