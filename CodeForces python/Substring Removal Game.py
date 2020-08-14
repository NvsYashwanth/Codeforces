t=int(input())

for i in range(t):
    s=input()
    z=s.split('0')
    x=[]
    for i in z:
        if i!='':
            x+=i,
    
    score=0
    lens=sorted(x,key=lambda i:len(i),reverse=True)
    for i in lens[0::2]:
        score+=len(i)
    print(score)