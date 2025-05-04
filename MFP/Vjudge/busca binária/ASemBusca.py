"""
em um dos exemplos, o input é 1 2 1 2 5, se eu or ordenar ficará 1 1 2 2 5
quando for aplicar a busca binário eu acho que não dará certo
digamos que eu tenha A = [1 1 3 3 6 6]   e    B = [3 4 5 6]
quando eu divido A ao meio eu tenho A[2] == b[1
"""


inputUser = input()
inputUser = inputUser.split()
tamanhoA = int(inputUser[0])
tamanhoB = int(inputUser[1])


arrayA = []
arrayB = []

arrayA = list(map(int, input().split())) 
arrayB = list(map(int, input().split()))
#map percorre cada item da lista e aplica o Int
#split pega o input e divide os elementos separando pelo " " e os coloca numa lista

contador = 0

for numeroB in arrayB:
    for numeroA in arrayA:
        if(numeroB>=numeroA):
            contador=contador+1
    print(contador, end = " ")
    contador = 0


    