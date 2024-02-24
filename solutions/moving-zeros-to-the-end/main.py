def move_zeros(array):
    arr=[array[i] for i in range(0, len(array)) if array[i] != 0 or array[i] is False]
    arr+=[0 for i in range(0, len(array)-len(arr))]
    
    return arr