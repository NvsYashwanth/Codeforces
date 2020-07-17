cards=int(input())
nums=[int(x) for x in input().split()]

s,d,=0,0
l,r=0,cards-1
state='s'

while(l<=r):
    if state=='s':
        if nums[l]>nums[r]:
            s+=nums[l]
            l+=1
        else:
            s+=nums[r]
            r-=1
        state='d'
    else:
        if nums[l]>nums[r]:
            d+=nums[l]
            l+=1
        else:
            d+=nums[r]
            r-=1
        state='s'

print(f"{s} {d}")