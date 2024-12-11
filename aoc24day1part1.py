a = []
b = []
for i in range(1000):
    x, y = map(int, input().split())
    a.append(x)
    b.append(y)
a.sort()
b.sort()
ans = 0
for i in range(1000):
    ans = ans + abs(a[i] - b[i])
print(ans)