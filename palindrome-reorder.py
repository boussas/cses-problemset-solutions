def ans(s):
    d={}
    for i in s:
        if i not in d:
            d[i]=1
        else:
            d[i]+=1
    odd=0
    st=""
    l=[]
    for i in d:
        if d[i]%2==0:
            l.append(i*d[i])
        else:
            odd+=1
            st=i*d[i]
    if odd>1:
        print("NO SOLUTION")
        return
    res=st
    for i in l:
        size=len(i)//2
        res = i[:size]+res+i[size:]
    print(res)
s=input()
ans(s)