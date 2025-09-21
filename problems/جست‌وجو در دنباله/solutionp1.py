n, q = map(int, input().split())
a = list(map(int, input().split()))

M = max(a)

cnt = [0 for i in range(M + 1)]

for i in range(0, n):
    cnt[a[i]] += 1

for i in range(M-1,0,-1):
     cnt[i] += cnt[i+1]

for i in range(q):
    x = int(input())
    if x > M:
        print(n)
    else:
        print(n - cnt[x])
