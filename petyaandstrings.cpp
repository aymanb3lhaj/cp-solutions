#include <iostream>
#include <algorithm> using namespace std;

void solve() {
  string s1, s2;
  cin >> s1 >> s2;
  transform(s1.begin(), s1.end(), s1.begin(), [](unsigned char c){return tolower(c);});
  transform(s2.begin(), s2.end(), s2.begin(), [](unsigned char c){return tolower(c);});
  int ans = 0;
  for (int i = 0; i < s1.length(); i++) {
    if (s1[i] > s2[i]) {
      ans = 1;
      break;
    } else {
      ans = -1;
    }
  }
  cout << ans << '\n';
}

int main() {
  solve();
  return 0;
}
