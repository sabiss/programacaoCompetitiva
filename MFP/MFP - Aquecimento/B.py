a,b = map(int, input().split())


arraya = list(map(int,input().split()))
arrayb = list(map(int, input().split()))

arraya.sort()
maior = 0




for lb in arrayb:
    left = 0
    right = len(arraya)
    while(left<right):
        mid =(left+right)//2
        if(arraya[mid]<=lb):
            left=  mid+1
        else: 
            right = mid
    print(left)








    



