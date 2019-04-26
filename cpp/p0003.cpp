// answer: 6857
#include <iostream>
#include <cmath>
using namespace std;

long smallest_prime_factor(long num) {
    for (long i = 2; i < sqrt(num) + 1; i++) {
        if (num % i == 0)
           return i;
    }
    return num;
}


int main()
{
  long num = 600851475143;
  while (true) {
      long p = smallest_prime_factor(num);
      if (p < num)
        num = floor(num/p);
      else
        break;
  }
  cout << num;
  return 0;
}
