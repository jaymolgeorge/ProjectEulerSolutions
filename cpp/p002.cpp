/* 
 * Solution to Project Euler problem 2
 * Find the sum of the even-valued terms in the Fibonacci sequence whose values do not exceed four million. Answer is 4613732
 */

#include <iostream>
using namespace std;

int main()
{
  int x = 1;
  int y = 2;
  int sum = 0;
  while (x < 4000000) {
      if (x % 2 == 0) {
      sum += x;
      }
      int z = x + y;
      x = y;
      y = z;
      
  }
  cout << sum << endl;
  return 0;
}
