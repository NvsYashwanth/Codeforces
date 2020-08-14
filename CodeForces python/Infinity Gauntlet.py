stones=int(input())
if stones==6:
    print(0)
else:
    d={'purple':'Power','green':'Time','blue':'Space','orange':'Soul','red':'Reality','yellow':'Mind'}
    z=[]

    for i in range(stones):
        s=input()
        z+=s,

    print(6-stones)
    for i in d:
        if i not in z:
            print(d[i])