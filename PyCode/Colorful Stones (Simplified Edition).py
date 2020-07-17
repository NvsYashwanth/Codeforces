s=input()
t=input()
z=len(t)
c=0
for i in range(z):
    if s[c]==t[i]:
        c+=1
    
print(c+1)