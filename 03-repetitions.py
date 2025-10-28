s=input()
l=0
n=len(s)
res=0
for r in range(n):
    while s[l]!=s[r]:
        l+=1
    res=max(res,r-l+1)
print(res)