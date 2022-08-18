def canSum(targetVal, arr, memo = {}):
    if(targetVal in memo):
        return memo[targetVal]
    if(targetVal == 0):
        return True
    if(targetVal < 0):
        return False
    for i in arr:
        if(canSum(targetVal-i,arr,memo)):
            memo[targetVal] = True
            return True
    memo[targetVal] = False
    return False

print(canSum(7,[5,3,4,7]))