#DEU CERTO
a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = list(map(int, input().split()))
d = list(map(int, input().split()))

cords = []
cords.append(a)
cords.append(b)
cords.append(c)
cords.append(d)
cords.sort()
print((cords[1][1] - cords[0][1])*(cords[2][0]-cords[0][0] ))