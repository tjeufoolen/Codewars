def to_jaden_case(string):
    words = [word.capitalize() for word in string.split()];
    return " ".join(words);