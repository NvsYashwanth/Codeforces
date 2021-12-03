#Author:harshal_509
from math import *
for _ in range(1):
    n=int(input())
    a=list(map(int,input().split()))
    b=[]
    for i in range(n):
        b.append([a[i],i+1])
    b.sort()
    i=0
    j=n-1
    while(i<j):
        print(b[i][1],b[j][1])
        i+=1
        j-=1
