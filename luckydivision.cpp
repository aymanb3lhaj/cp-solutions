#include <iostream>
#include <string>
using namespace std;

void solve() {
  int n;
  cin >> n;
  if (n%4==0) {
    cout << "YES" << '\n';
    return;
  }

  for (char c : to_string(n)) {
    int i = c-'0';
    if (i==4 || i==7) {
      continue;
    } else {
      cout << "NO" << '\n';
      return;
    }
  }
  cout << "YES" << '\n';
}

int main() {
  solve();
  return 0;
}
