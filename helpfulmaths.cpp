#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
  string s;
  cin >> s;
  if (s.length() == 1) {
    cout << s << '\n';
    return;
  }
  vector<int> v;
  for (char c : s) {
    if (c != '+')
      v.push_back(c-'0');
  }
  sort(v.begin(), v.end());
  cout << v[0];
  for (int i = 1; i < v.size(); i++)
    cout << '+' << v[i];
  cout << '\n';
}

int main() {
  solve();
  return 0;
}
