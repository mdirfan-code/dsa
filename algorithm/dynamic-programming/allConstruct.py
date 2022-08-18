def matchInitial(val,op):
    j=0
    for i in op:
        if(j==len(val) or i != val[j]):
            return -1
        j+=1
    return j


        

def allConstruct(target, words,memo = {}):
    if(target in memo):
        return memo[target]
    if(target == ""):
        return [[]]
    x = []
    for i in words:
        j = matchInitial(target,i)
        if(j>=0):
            k=allConstruct(target[j:],words)
            if(k!=[]):
                for ii in range(len(k)):
                    k[ii] = [i] + k[ii]
                x.append(*k)
                
    memo[target] = x
    return memo[target] 
    
print(allConstruct("abcdef",["ab","abc","cd","def","abcd","ef"]))
    

    