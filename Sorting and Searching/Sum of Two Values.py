n, x = map(int, input().split())
a = list(map(int, input().split()))
 
arr = [(val, i+1) for i, val in enumerate(a)]
arr.sort() 

left, right = 0, n - 1
found = False

while left < right:
    s = arr[left][0] + arr[right][0]
    if s == x:
        print(arr[left][1], arr[right][1])
        found = True
        break
    elif s < x:
        left += 1
    else:
        right -= 1

if not found:
    print("IMPOSSIBLE")
