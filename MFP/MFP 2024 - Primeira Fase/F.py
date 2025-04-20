#Deu certo
n = int(input())
p = [8, 4, 2,1]

q = 0

for num in p:
    if(n - num >= 0):
        q +=1
        n-=num
print(q)