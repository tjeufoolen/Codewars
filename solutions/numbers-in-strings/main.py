import re

def solve(s):
    return sorted([int(el) for el in re.findall(r"[^\W\d_]+|\d+", s) if not el.isalpha()])[-1]