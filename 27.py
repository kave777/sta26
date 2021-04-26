n=int(input())
s=[[0,0]]*4
for _ in range(n):
    pair=list(map(int,input().split()))
    if(pair[0]%2!=0):
        p=sorted(pair)
        com=[[a[0]+p[0],a[1]+p[1]] for a in s]
        for ff in com:
           # ч ч - 0 ч н -1 н ч -2 н н -3
           pla=2*(ff[0]%2)+ff[1]%2
           s[pla] = max(s[pla],ff,key=sum)
print(s)
print(sum(s[1]))
