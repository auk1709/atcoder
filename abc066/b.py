s = input()

f = False
sl = len(s)
while f == False:
    sl -= 2
    if s[0:sl//2] == s[(sl+1)//2:sl]:
        f = True

print(sl)
