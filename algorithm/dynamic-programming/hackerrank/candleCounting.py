def isSorted(l):
    i=0
    for i in range(len(l)-1):
        if(l[i]>l[i+1]):
            return False
    return True

def solve(n,m,ch,cc):
    if(len(set(cc)) == m and isSorted(ch)):
        print(ch,":",cc)
        return 1

    if(m > len(ch)):
        return 0
    count = 0

    for i in range(n):
        res = ch[:i]+ch[i+1:]
        
        count+=solve(n-1,m,res,cc[:i]+cc[i+1:])

    return count








n,m = map(int,input().split())
ch,cc=[],[]
for i in range(n):
    f,s = map(int,input().split())
    ch.append(f)
    cc.append(s)

print(solve(n,m,ch,cc))