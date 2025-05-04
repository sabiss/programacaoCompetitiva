#Dado um array ordenado de inteiros, encontre o índice da primeira ocorrência de um determinado número alvo. Se o número alvo não estiver presente no array, retorne -1.

array = list(map(int, input().split()))
array.sort()
num = int(input())
l = 0
r = len(array)
mid=(l+r)//2

while(l!=r):
    if(num==array[mid]):
        if(array[mid-1]==num):
            r = mid
        else:
            print(mid)
            break
    elif(num > mid):
        l=mid+1
        
    else:
        r=mid-1
    mid=(l+r)//2
if(l==r):
    print(-1)

    

