n = int(input())
laptops = []
achei = False

for i in range(n):
    entrada = input()
    p,q = map(int, entrada.split())
    laptops.append((p,q))

laptops.sort()

for i in range(1,n):
    if laptops[i][1] < laptops[i - 1][1]:
        achei = True
        break
if(achei):
    print("Happy Alex")
else:
    print("Poor Alex")