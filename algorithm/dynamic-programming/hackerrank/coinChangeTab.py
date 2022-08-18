def solve(n,cr):
    dpar = [1]+[0]*n
    for i in cr:
        for j in range(0,n+1):
            if(j - i>=0):
                dpar[j]+=dpar[j-i]
    return dpar[-1]

n, m = tuple(map(int,input().split(" ")))
cr = list(map(int,input().split()))

print(solve(n,cr))