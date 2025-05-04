t = int(input())

for i in range(t):
    s = list(map(int, input().split()))
    for sen in s:
        if(s.count(sen)==1):
            print(sen)



