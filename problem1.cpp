#include <iostream>
using namespace std;

void solve() {
  int ans = 0;
  for (int i = 0; i < 1000; i++) {
    if (i%3==0 || i%5==0)
      ans += i;
  }
  cout << ans << '\n';
}

int main() {
  solve();
  return 0;
}
