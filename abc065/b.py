n = int(input())
a = [0]*(n+1)
for i in range(1, n+1):
    a[i] = int(input())

ans = 0
now = 1
nex = a[1]
for i in range(n):
    ans += 1
    now = nex
    nex = a[now]
    if now == 2:
        break
if ans == n:
    ans = -1
print(ans)
