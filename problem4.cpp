#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int largestPalindromeK(int s, int e) {
  vector<int> v;
  for (int i = s; i <= e; i++) {
    for (int j = i+1; j <= e; j++) {
      int m = i*j;
      string s = to_string(m);
      string r = s;
      reverse(r.begin(), r.end());
      if (s.compare(r) == 0)
        v.push_back(m);
    }
  }
  sort(v.begin(), v.end());
  return v[v.size()-1]; 
}

void solve() {
  // cout << largestPalindromeK(10, 99) << '\n';
  cout << largestPalindromeK(100, 999) << '\n';
}

int main() {
  solve();
  return 0;
}
