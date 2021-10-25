#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int MAX = 2000000;

// O(N^2)
bool isPrime(int n) {
  if (n<2) return false;
  bool ans = true;
  for (int i = 2; i < n; i++) {
    if (n%i==0)
      ans = false;
  }
  return ans;
}

// Faster O(N^3/2)
bool isPrimeFast(int n) {
  // check corner cases
  if (n <= 1) return false;
  if (n <= 3) return true;
  if (n%2==0 || n%3==0) return false;

  for (int i = 5; i*i <= n; i+=6)
    if (n%i==0 || n%(i+2)==0)
      return false;

  return true;
}

int getSumPrimes(int MAX) {
  int ans = 0;
  for (int i = 2; i < MAX; i++)
    if (isPrimeFast(i))
      ans += i;
  return ans;
}

void solve() {
  cout << getSumPrimes(MAX) << '\n';
}

int main() {
  solve();
  return 0;
}
