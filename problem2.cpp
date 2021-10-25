#include <iostream>
using namespace std;

int MAX = 4000000;

long long fib(long long n) {
  if (n <= 1)
    return n;
  return fib(n-1) + fib(n-2); 
}

void solve() {
  long long ans = 0;
  int i = 0;
  while (fib(i) < MAX) {
    if (!(fib(i)&1))
      ans += fib(i);
    i++;
  }
  cout << ans << '\n';
}

int main() {
  solve();
  return 0;
}
