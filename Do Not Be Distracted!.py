t= int(input())
for _ in range(t):
    n=int(input())
    s=input()
    li=[0 for _ in range(26)]
    flag=0
    for i in range(n):
        if li[ord(s[i])-65]==1:
            print("NO")
            flag=1
            break
        if i+1<n and s[i]!=s[i+1]:
            li[ord(s[i])-65]=1
    if flag==0:
        print("YES")