# Você recebeu um array de N números inteiros. Agora, você precisa responder a Q consultas do tipo:

# Quantos números pares existem entre os índices L e R (inclusive)?
entrada = input()
n,q = map(int, entrada.split())

nums = []

entrada = input()
nums = map(int, entrada.split())
pre = []

for i in range(n):
    if(i == 0):
        if(nums[i]%2==0):
            pre.append(1)
        else:
            pre.append(0)
    elif(nums[i]%2==0):
        pre.append(pre[i-1]+1)
    else:
        pre.append(0)

for _ in range(q):
    entrada = input()
    l,r = map(int,entrada.split())
    if(l==0):
        print(pre[r])
    else:
        print(pre[r]-pre[l-1])