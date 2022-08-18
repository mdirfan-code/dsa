from math import floor


def solve(n,eg,memo={}):
    
    if(n in memo):
        return memo[n]
    if(n < 0):
        return 0
    if(n == 0):
        return 1
    minNo = 0
    flg = 0
    for i in eg:
        mm = solve(n-i,eg,memo)

        if mm != 0 and flg == 0:
            minNo = mm
            flg = 1
        if mm < minNo and mm > 0 and flg == 1:
            minNo = mm
    
    if(minNo != 0):
        minNo += 1
    memo[n] = minNo
    return memo[n]





n = 12
clps = int(floor(n**(0.5)))
egele = []
print(clps)
for i in range(1,clps+1):
    egele.append(i**2)

print(solve(n,egele))