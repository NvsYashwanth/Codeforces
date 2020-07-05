g=int(input())
s=input()

c=0
for i in range(g):
    if s[i]=='A':
        c+=1
    else:
        c-=1

if c==0:
    print('Friendship')
elif c>0:
    print('Anton')
else:
    print('Danik')