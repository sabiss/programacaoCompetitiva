#não deu certo

import math

etp = int(input())
tp = pow(2, etp) - 1

moedas = list(map(int, input().split()))

mc = 0
moedas.remove(0)

p = True
k = 1
while(p==True):
    if(k > len(moedas) or k >= tp):
        p = False

    if(k ==1):
        mc = moedas[k-1]
    else:
        mc += moedas[k]
    
    p1 = (2*k)+1
    p2 = 2*k
    if(p1<len(moedas) and p2<len(moedas)):
        if(moedas[(2*k)+1] > moedas[2*k]):
            k = (2*k)+1
        else:
            k = 2*k
    else:
        if(p1<len(moedas)):
            k = (2*k)+1
        elif(p2<len(moedas)):
            k = 2*k
        else:
            break
print(mc)

