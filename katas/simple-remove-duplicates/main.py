def solve(arr):
    result=[]
    for i in range(len(arr)-1,-1,-1):
        if arr[i] not in result:
            result.insert(0, arr[i])
    return result