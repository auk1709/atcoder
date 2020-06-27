import sympy
n = int(input())

sum = 0
for i in range(1, n+1):
    sum += i * sympy.divisor_count(i)

print(sum)
