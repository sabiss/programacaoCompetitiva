#Dados dois arrays ordenados de inteiros, A e B, para cada elemento em B, determine quantos elementos em A são menores ou iguais a ele.
a = list(map(int, input().split()))
a.sort()
b = list(map(int, input().split()))

for elementoB in b:
    l=0
    r=len(a)
    while(r>l):
        mid = (l+r)//2
        if(elementoB >= a[mid]):
            l = mid
        else:
            r=mid-1
    
    print(l+1, end=" ")




        


