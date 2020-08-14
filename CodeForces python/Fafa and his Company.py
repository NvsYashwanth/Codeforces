n=int(input())

leaders=1
c=0
while(leaders!=n):
    rem=n-leaders
    if rem%leaders==0:
        c+=1
    leaders+=1
print(c)