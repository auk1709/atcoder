n, m, k = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

t = 0
ans = 0
i = 0
j = 0
while t < k:
    if i < n and j < m:
        if a[i] < b[j]:
            if t + a[i] <= k:
                t += a[i]
                i += 1
            else:
                break
        elif a[i] < b[j]:
            if t + b[j] <= k:
                t += b[j]
                j += 1
            else:
                break
        else:
            if a[i] + t > k:
                break
            x = i
            y = j
            while a[x] == b[y] and x < n-1 and y < m-1:
                x += 1
                y += 1
            if a[x] < b[y]:
                while i < x and t < k:
                    if t + a[i] <= k:
                        t += a[i]
                        i += 1
                        n += 1
                    else:
                        break
            elif a[x] > b[y]:
                while j < y and t < k:
                    if t + b[j] <= k:
                        t += b[j]
                        j += 1
                        n += 1
                    else:
                        break
            else:
                if y+1 == m:
                    if t + a[i] <= k:
                        t += a[i]
                        i += 1
                    else:
                        break
                else:
                    if t + b[j] <= k:
                        t += b[j]
                        j += 1
                    else:
                        break
    elif i < n:
        if t + a[i] <= k:
            t += a[i]
            i += 1
        else:
            break
    elif j < m:
        if t + b[j] <= k:
            t += b[j]
            j += 1
        else:
            break
    ans += 1

print(ans)
