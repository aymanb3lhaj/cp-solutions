#include <iostream>
using namespace std;

int NTH = 10001;

bool isPrime(int n) {
  if (n<2) return false;
  bool ans = true;
  for (int i = 2; i < n; i++) {
    if (n%i==0)
      ans = false;
  }
  return ans;
}

bool isPrimeFaster(int n) {
  if (n <= 1) return false;
  if (n <= 3) return true;
  if (n%2==0 || n%3==0) return false;
  for (int i = 5; i*i <= n; i+=6)
    if (n%i == 0 || n%(i+2)==0)
      return false;
  return true;
}

void solve() {
  for (int i = 0, count = 0; count <= NTH; i++) {
    if (isPrimeFaster(i)) {
      count++;
      if (count==NTH)
        cout << i << '\n';
    }
  }
}

int main() {
  solve();
  return 0;
}
