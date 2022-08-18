def howSum(targetVal,arr,memo={}):
    if(targetVal in memo):
        return memo[targetVal]
    if(targetVal == 0):
        return []
    if(targetVal < 0):
        return "null"
    
    for i in arr:
        x = howSum(targetVal-i,arr,memo)
        if(x != "null"):
            # print(targetVal,":",i,":",x)
            x.append(i)
            memo[targetVal] = x
            return x
    memo[targetVal] = "null"
    return "null"
print(howSum(300,[7,14]))

