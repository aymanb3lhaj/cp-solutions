#include <iostream>
#include <vector>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  for (int x : v)
    cout << x << endl;
}

int main() {
  solve();
  return 0;
}
