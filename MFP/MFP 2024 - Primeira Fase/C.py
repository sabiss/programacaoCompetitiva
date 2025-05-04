#não deu certo

import math

n = int(input())
nPostos = math.pow(2, n) - 1

moedas = list(map(int, input().split()))
s = 0
s1 = 0
s2=0
k = 0

while(k<nPostos):
    if(k==0):
        s1=0
        s2=0
    else:
        k = 2*k
        s1 = moedas[k]
        k = (2*k)+1
        s2 = moedas[k]
        if(s1>s2):
            s=s1
        else:
            s=s2

if(tm2k1>tm2k):
    print(tm2k1)
else:
    print(tm2k)

