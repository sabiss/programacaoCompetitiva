#DEU CERTO
n = int(input())
time1 = []
time2 = []
for i in range(n):
    k = input()
    if('Time 1' in k):
        time1.append(k)
    else:
        time2.append(k)
pt1 = list(map(lambda x: int(x[8]), time1))
pt2 = list(map(lambda x: int(x[8]),time2))

p1 = sum(pt1)
p2 = sum(pt2)

print(f"{p1} x {p2}")
