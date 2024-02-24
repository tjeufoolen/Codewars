def printer_error(s):
    errors=0
    
    for c in s:
        if ord(c) > ord('m'): 
            errors += 1
            
    return f'{errors}/{len(s)}'