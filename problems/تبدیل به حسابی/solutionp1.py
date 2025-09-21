n, k = map(int, input().split())
a = list(map(int, input().split()))

b = [a[i] - i * k for i in range(n)]
b.sort()

midel = b[len(b) // 2]
ans = sum(abs(x - midel) for x in b)

print(ans)
