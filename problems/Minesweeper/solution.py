n,m = list(map(int, input().split()))

k = int(input())

pos = [-1,0,1]
board = []

for x in range(n):
    board.append([])
    for y in range(m):
         board[x].append(0)

for i in range(k):
    a = list(map(int, input().split()))
    board[a[0]-1][a[1]-1] = "*"


for x in range(n):
    for y in range(m):
        if board[x][y] != "*":
            for i in pos:
                for j in pos:
                    if i!=0 or j!=0:
                        if 0 <= x+i < n and 0 <= y+j < m:
                            if board[x+i][y+j] == "*":
                                board[x][y] += 1




for i in range(n):
    for j in range(m):
            print(board[i][j], end=" ")
    print()
