def matchInitial(val,op):
    j=0
    for i in op:
        if(j==len(val) or i != val[j]):
            return -1
        j+=1
    return j


        

def countConstruct(target, words,memo = {}):
    if(target in memo):
        return memo[target]
    if(target == ""):
        return 1
    count = 0
    for i in words:
        j = matchInitial(target,i)
        if(j>=0):
            count += countConstruct(target[j:],words)
            
                
    memo[target] = count
    return count
    
print(countConstruct("abcdef",["ab","abc","cd","def","abcd","ef"]))
    

    