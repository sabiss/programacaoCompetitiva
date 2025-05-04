tamanhoA = int(input())
tamanhoB = int(input())

entradaA = input()
entradaB = input()

stringSeparadaA = entradaA.split()
stringSeparadaB = entradaB.split()

arrayA = [int(numero) for numero in stringSeparadaA]
arrayB = [int(numero) for numero in stringSeparadaB]

arrayA.sort()
arrayB.sort()

l=0
r=0
meio = (len(arrayB)/2) -1
output = []

for numA in arrayB:
    if(numA <= arrayB[meio]):
        output.append(numA)
        r=meio-1
        meio = ((l+r)/2)
