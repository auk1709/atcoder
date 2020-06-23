import itertools
n = int(input())
p = tuple(int(x) for x in input().split())
q = tuple(int(x) for x in input().split())

pn = 0
qn = 0

a = list(itertools.permutations(range(1, n+1)))
# print(a)

ans = abs(a.index(p) - a.index(q))
print(ans)
