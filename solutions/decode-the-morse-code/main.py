def decodeMorse(morse_code):
    words=[[MORSE_CODE[c] if c in MORSE_CODE else c for c in w.split(" ")] for w in morse_code.strip().split("   ")]
    result=' '.join([''.join(word) for word in words])
    return result