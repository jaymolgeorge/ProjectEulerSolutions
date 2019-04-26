import math

'''
Take the number n and repeatedly divide out its smallest factor (which must also be prime),
then the last factor that we divide out must be the largest prime factor of n
Answer: 6857
'''

def smallest_prime_factor(num):
    assert num > 2
    for i in range(2, int(math.sqrt(num)) + 1):
        if num % i == 0:
            return i
    return num

num = 600851475143
while True:
    x = smallest_prime_factor(num)
    if x < num:
        num //=  x
    else:
        print(num)
        break
