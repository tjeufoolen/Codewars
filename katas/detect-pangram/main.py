import string

def is_pangram(s):
    s = "".join(filter(str.isalpha, s))
    s = s.lower()
    
    data = {}
    for c in s:
        count = data.get(c)
        if count != None:
            data[c] = count + 1
        else:
            data[c] = 1
    
    return len(data) == 26