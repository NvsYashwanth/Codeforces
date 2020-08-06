n=int(input())
s=input()
x=0
y=0

prev=s[0]
for curr in s[1:]:
    if prev=='S' and curr=='F':
        x+=1
    elif prev=='F' and curr=='S':
        y+=1
    prev=curr

if x>y:
    print("YES")
else:
    print("NO")