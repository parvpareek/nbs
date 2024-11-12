import numpy as np

def relative_deviation(a, b):
    A = 2 ** a
    B = 10 ** b
    return abs(A - B) / max(A, B)

def find_minimum_deviation(a_min, a_max, b_min, b_max):
    min_deviation = float('inf')
    best_a = None
    best_b = None
    
    for a in range(a_min, a_max + 1):
        for b in range(b_min, b_max + 1):
            deviation = relative_deviation(a, b)
            if deviation < min_deviation:
                min_deviation = deviation
                best_a = a
                best_b = b
    
    return min_deviation, best_a, best_b

a_min, a_max = 1, 1000
b_min, b_max = 1, 1000

min_deviation, best_a, best_b = find_minimum_deviation(a_min, a_max, b_min, b_max)

print(f"Minimum relative deviation: {min_deviation}")
print(f"Occurs when a = {best_a}, b = {best_b}")
print(f"2^{best_a} = {2 ** best_a}, 10^{best_b} = {10 ** best_b}")
