s = input()
t = input()

n = 0
for i in range(len(s)):
    if(s[i] != t[i]):
        n = n+1

print(n)
