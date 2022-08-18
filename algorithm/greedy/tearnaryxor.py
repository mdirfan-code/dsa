ch=False
n=int(input())
s=input()
def fun(i,num,ch):
    if i==n:
        return num 
    if ch:
        return fun(i+1,num*10,ch)
    if s[i]=='0':
        return fun(i+1,num*10,ch)
    if s[i]=='2':
        return fun(i+1,num*10+1,ch)
    if i==0:
        return fun(i+1,2,ch)
    ch=True
    return fun(i+1,num*10+1,ch)
    
print(fun(0,0,ch))