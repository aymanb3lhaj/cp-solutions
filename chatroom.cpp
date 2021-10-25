#include <iostream>
using namespace std;

void solve() {
  string s, word = "hello";
  int j = 0, pas = 0;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == word[j]) {
      j++;
      pas++;
      if (pas == 5)
        break;
    }
  }
  cout << ((pas==5) ? "YES" : "NO") << '\n';
}

int main() {
  solve();
  return 0;
}
