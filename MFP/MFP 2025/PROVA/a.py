import bisect

n, m = list(map(int, input().split()))

a = list(map(int, input().split()))#n inteiros
c = m
imprimir = []
tamanho = len(a)
# while c>=1:
#         nums = list(filter(lambda x: x>=q, a))
#         w = len(nums)
#         imprimir.append(w)
        
#         c-=1#minutagem
#         q+=1#comparação de amplitudes
#         k+=1

# for f in imprimir:
#     print(f, end=' ')

a.sort()

for i in range(1,m+1):
        t = bisect.bisect_left(a, i)
        imprimir.append(tamanho-t)

for g in imprimir:
        print(g, end= " ")



