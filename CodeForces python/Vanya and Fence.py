n,h=[int(x) for x in input().split()]
f=[int(x) for x in input().split()]
w=n
for i in f:
    if i>h:
        w+=1
print(w)