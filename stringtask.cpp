#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

void solve() {
  string s;
  cin >> s;
  transform(s.begin(), s.end(), s.begin(), [](unsigned char c){return tolower(c);});
  string ans = "";
  map<char, int> v;
  v['a'] = 0;
  v['o'] = 0;
  v['y'] = 0;
  v['e'] = 0;
  v['u'] = 0;
  v['i'] = 0;

  for (char c : s) {
    if (v.find(c) == v.end()) {
      ans += '.'; 
      ans += c;
    } else {
      continue;
    }
  }
  cout << ans << '\n';
}

int main() {
  solve();
  return 0;
}
