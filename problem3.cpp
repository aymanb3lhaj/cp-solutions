#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int largestPrime(long long n) {
  vector<int> v;
  while (!(n&1)) {
    v.push_back(2); 
    n /= 2;
  }

  for (int i = 3; i <= sqrt(n); i += 2) {
    while (n%i==0) {
      v.push_back(i);
      n /= i;
    }
  }

  if (n>2)
    v.push_back(n);

  sort(v.begin(), v.end());
  return v[v.size()-1];
}

void solve() {
  cout << largestPrime(600851475143) << '\n';
}

int main() {
  solve();
  return 0;
}
