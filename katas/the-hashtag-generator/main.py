def generate_hashtag(s):
    if (len(s) == 0):
        return False
    
    result="#" + s.title().replace(" ", "")
    
    if (len(result) == 0 or len(result) > 140):
        return False
    else:
        return result