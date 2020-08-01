s=input()
l=0
u=0

for i in s:
    if i>='a':
        l+=1
    else:
        u+=1
if u<=l:
    print(s.lower())
else:
    print(s.upper())
