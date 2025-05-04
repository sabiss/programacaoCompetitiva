casosdeTeste = int(input())

for i in range(casosdeTeste):
    seq = input()
    seq = list(seq)

    q  = int(input())
    for e in range(q):#roda as perguntas
        v = input()#string para verificar se é substring de seq
        indexs = []
        for letra in v:#percorre a string
            if(letra in seq):#vê se essa letra pertence a string principal
                i = seq.index(letra)#pega o index dela na string principal
                if len(indexs)> 0:
                    if(i > indexs[-1]):#verifica se o index é maior que o index da ultima letra verificada
                        indexs.append(i)
                else:
                    indexs.append(i)
                seq.pop(i)#retira a letra verificada na string principal pra não verificar duas vezes, pois o método "index" pega a primeira ocorrencia
                seq.insert(i,0)#no lugar coloca um zero

        if len(indexs) == len(v):
            print("YES")
        else:
            print("NO")