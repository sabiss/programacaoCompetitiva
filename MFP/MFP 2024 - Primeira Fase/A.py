#excedeu o tempo
import sys
input  = sys.stdin.readline

e = input()

n, p = map(int, e.split())

v = input()
v = list(map(int,v.split()))
v.sort()
t = 0
pe = 0

while(pe<p):
    t=t+1
    for i in v:
        if(t%i==0):
            pe=pe+1
    
print(t)
