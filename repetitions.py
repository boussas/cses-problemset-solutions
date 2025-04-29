s=input()
res=0
l,r=0,0
while r<len(s):
    while s[l]!=s[r]:
        l+=1
    res=max(res,r-l+1)
    r+=1
print(res)
