def find_it(seq):
    seq.sort()

    oldnum=0
    count=0
    
    for index, num in enumerate(seq):
        if index == 0:
            oldnum=num
            count=0
            
        if oldnum == num:
            count+=1
        else:
            if (count % 2) != 0:
                return oldnum
            oldnum = num
            count=1
    
    return oldnum