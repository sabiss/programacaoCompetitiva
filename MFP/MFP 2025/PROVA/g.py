s = input()

pa = ""
pb = ""

for i in range(len(s)):
    if(i%2==0):
        pa+=s[i]
    else:
        pb+=s[i]

print(pa)
print(pb)