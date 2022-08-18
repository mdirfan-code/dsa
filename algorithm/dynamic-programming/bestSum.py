def bestSum(targetVal,arr,memo={}):
    if(targetVal in memo):
        return memo[targetVal]
    if(targetVal == 0):
        return []
    if(targetVal < 0):
        return "null"
    allComb= []
    for i in arr:
        x = bestSum(targetVal-i,arr,memo)
        if(x != "null"):
            # print(targetVal,":",i,":",x)
            x.append(i)
            allComb.append(x)
    print(targetVal,":",allComb)
    if(len(allComb)):      
        memo[targetVal] = min(allComb,key=lambda x: len(x))
    else:
        memo[targetVal] = "null"
    return memo[targetVal]
# print(bestSum(300,[7,14]))
print(bestSum(8,[2,3,5]))


