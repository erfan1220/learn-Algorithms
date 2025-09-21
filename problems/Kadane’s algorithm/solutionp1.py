# kadanes algo O(n)
n = int(input())
val = list(map(int, input().split()))
max_current = max_global = val[0]
for i in val[1:]:
    max_current = max(i, max_current + i)
    max_global = max(max_global, max_current)
print(max_global)