t=int(input())
for i in range(t):
    n=int(input())
    p=1
    count=0
    while p<=n:
        for j in range(1,10):
            if p*j<=n:
                count+=1
        p=p*10+1
    print(count)