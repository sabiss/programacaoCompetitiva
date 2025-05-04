import bisect

n = input()
a = list(map(int, input().split()))
b = list(map(int, input().split()))
a.sort()

imprimir = ""
for p in b:
    f = bisect.bisect_right(a, p)
    imprimir+=f" {f}"

print(imprimir)