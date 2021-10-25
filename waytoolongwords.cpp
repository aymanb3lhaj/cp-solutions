#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  vector<string> v;
  for (int i = 0; i < n; i++) {
    cin >> s;
    if (s.length() < 10) {
      v.push_back(s);
      continue;
    }
    v.push_back(s[0]+to_string(s.length()-2)+s[s.length()-1]);
  }
  for (string s : v)
    cout << s << '\n';
}

int main() {
  solve();
  return 0;
}
