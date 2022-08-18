def mincost(n, k, a):
    i = 0
    if n == 1:
        return a[0][0]
    s_col = []
    t_col = []
    min_c = []
    while i<n:
        j = i
        for _ in range(j,n):
            s_col.append(int(a[_][1]))
            t_col.append(int(a[_][2]))
            if int(a[_][1]) != 0 or int(a[_][2]) != 0 :
                min_c.append(int(a[_][0])) 
        if sum(s_col) == k and sum(t_col) == k:
            return sum(min_c)
        else:
            s_col = []
            t_col = []
            min_c = []
            i+=1
    return min_c


n = 3
k = 1
a = [[4,1,1],[2,0,1],[1,1,0]]
n1 = 5
k1 = 2
a1 = [[16,0,0],[1,0,0],[2,0,1],[1,1,1],[4,1,0]]
n2 = 1
k2 = 1
a2 = [[2,1,1]]
print(mincost(n,k,a))
print(mincost(n1,k1,a1))
print(mincost(n2,k2,a2))
