
c = []
for i in range(4):
    a = list(map(int, input().split()))
    c.append(a)

c.sort()

r = (c[1][1] - c[0][1]) * (c[2][0] - c[0][0])
print(r)


