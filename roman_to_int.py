roman_to_int = {
    'I': 1,
    'V': 5,
    'X': 10,
    'L': 50,
    'C': 100,
    'D': 500,
    'M': 1000
}

def romanToInt(s):
    answer = i = 0
    while i<len(s):
        try:
            current = roman_to_int[s[i]]
            next = roman_to_int[s[i+1]]
            if current < next:
                answer += roman_to_int[s[i+1]] - roman_to_int[s[i]]
                i += 1
            else:
                answer += current
        except:
            answer += current
        i += 1
    return answer
    
number = romanToInt("MCMXCIV")
print(number)