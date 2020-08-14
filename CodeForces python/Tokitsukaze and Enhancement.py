
n=int(input())


cats={1:1,3:2,2:3,0:4}
res_cat=cats[n%4]
ans=res_cat

i=1
i_ans=0
while(i!=3):
    res_cat=cats[(n+i)%4]
    if ans>res_cat:
        ans=res_cat
        i_ans=i

    i+=1
print(i_ans,chr(ans+64))


