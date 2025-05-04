n = int(input())
p = input()

p = p.lower()
l = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', "n", 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
c = 0
for letra in l:
    if(letra in p):
        c+=1
        
if(c == len(l)):
    print("YES")
else:
    print("NO")
