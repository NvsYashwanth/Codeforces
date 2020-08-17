n=int(input())
# n=1
z=['o']*n
fibs=[1,1]
for i in range(2,n+1):
    fibs+=fibs[i-1]+fibs[i-2],

j=1
k=1
while(j!=n+1):
    if j>fibs[k]:
        k+=1
    if j==fibs[k]:
        z[j-1]='O'
        k+=1
    j+=1

print(''.join(z))