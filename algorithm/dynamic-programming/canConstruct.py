def matchInitial(val,op):
    j=0
    for i in op:
        if(j==len(val) or i != val[j]):
            return -1
        j+=1
    return j


        

def canConstruct(target, words,memo = {}):
    if(target in memo):
        return memo[target]
    if(target == ""):
        return True
    
    for i in words:
        j = matchInitial(target,i)
        if(j>=0):
            cc = canConstruct(target[j:],words)
            if(cc):
                memo[target] = True
                return True
    memo[target] = False
    return False
    
print(canConstruct("eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef",["eeee","ee","eeeeeeeeeeee","eeeeee","de"]))
    

    