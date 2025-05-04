n = int(input())
t1 = 0
t2 = 0

for i in range(n):
    a = input()
    if(a[5] == '1'):
        t1+=int(a[8])
    else:
        t2+=int(a[8])

print(f"{t1} x {t2}")