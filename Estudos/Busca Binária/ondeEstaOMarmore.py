import sys

input = sys.stdin.readline  # Substitui a função input

n = 1
q = 1
while(n!=0 and q!=0 ):
    n,q = map(int,input().split())
    a = []

    for i in range(n):
        b = int(input())
        a.append(b)
    a.sort()
    for i in range(q):
        numAchar = int(input())
        l = 0
        r = len(a)-1
        res = 0
        while(r>=l):
            mid= (l+r)//2
            if a[mid] == numAchar:
                res = mid
                r = mid-1
            elif numAchar > a[mid] :
                l = mid+1
            else:
                r=mid-1
        print(f"CASE# {q}:")
    
        if res == 0:
            print(f"{numAchar} not found")
        else:
            print(f"{numAchar} found at {res+1}")