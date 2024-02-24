import numpy

def persistence(n):
    if (n < 10):
        return 0

    digits=[int(x) for x in str(n)]
    result=numpy.prod(digits)

    return persistence(result) + 1