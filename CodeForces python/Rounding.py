n=int(input())

if n%10>5:
    n=n-n%10+10
else:
    n=n-n%10
print(n)