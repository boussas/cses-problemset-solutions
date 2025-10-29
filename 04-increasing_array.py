n = int(input())
l = list(map(int, input().split()))
res=0
for i in range(n-1):
    if l[i]>l[i+1]:
        res+=l[i]-l[i+1]
        l[i+1]=l[i]
print(res)