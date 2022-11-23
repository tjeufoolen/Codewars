def is_square(n):    
    if (n < 0):
        return False
    return (n ** (1/2)).is_integer()