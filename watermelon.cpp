#include <iostream>
using namespace std;

void solve() {
  int w;
  cin >> w;
  cout << ((w&1) ? "NO" : "YES") << '\n'; 
}

int main() {
  solve();
  return 0;
}
