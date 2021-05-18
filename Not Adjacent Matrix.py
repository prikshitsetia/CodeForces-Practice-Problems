#Sudoku Solver Approach Backtracking
# import sys

# def canPlace(matrix,i,j,k,n):
#     for a in range(n):
#         for b in range(n):
#             if matrix[a][b]==k:
#                 return False
#     if i-1>=0 and (matrix[i-1][j]==k or abs(matrix[i-1][j]-k))==1:
#         return False
#     if i+1<n and (matrix[i+1][j]==k or abs(matrix[i+1][j]-k))==1:
#         return False
#     if j-1>=0 and (matrix[i][j-1]==k or abs(matrix[i][j-1]-k))==1:
#         return False
#     if j+1<n and (matrix[i][j+1]==k or abs(matrix[i][j+1]-k))==1:
#         return False
#     return True    

# def check(matrix,i,j,n):
#     if i>=n:
#         return True
#     if j>=n:
#         return check(matrix,i+1,0,n)
#     if matrix[i][j]!=sys.maxsize:
#         return check(matrix,i,j+1,n)
#     ans=False
#     for k in range(1,(n*n)+1):
#         if canPlace(matrix,i,j,k,n):
#             matrix[i][j]=k
#             ans=check(matrix,i,j+1,n)
#             if ans:
#                 return True
#     matrix[i][j]=sys.maxsize
#     return False
t=int(input())
for _ in range(t):
    n=int(input())
    if n==1:
        print(1)
        continue
    if n==2:
        print(-1)
        continue
    matrix=[[0 for _ in range(n)] for _ in range(n)]
    black=[]
    c=1
    for i in range(n):
        for j in range(n):
            if int((i+j)%2)==0:
                matrix[i][j]=c
                c+=1
            else:
                black.append(str(i)+","+str(j))
    for i in black:
        li=i.split(",")
        matrix[int(li[0])][int(li[1])]=c
        c+=1
    for i in range(n):
        for j in range(n):
            print(matrix[i][j],end=" ")
        print("")