#include <iostream>
using namespace std;

int MAX = 20;

void solve() {
  int state = 1, n = 1;
  while (state) {
    int div = 0;
    for (int i = 1; i < MAX+1; i++) {
      if (n%i==0) {
        div += 1;
        continue;
      } else {
        n++;
        break;
      }
    }
    if (div == MAX)
      state = 0;
  }
  cout << n << '\n';
}

int main() {
  solve();
  return 0;
}
