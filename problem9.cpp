#include <iostream>
using namespace std;

void solve() {
  int a = 0, b = 0, c = 0;
  for (a = 0; a <= 1000; a++) {
    for (b = 0; b <= 1000; b++) {
      for (c = 0; c <= 1000; c++) {
        if (((a^2)+(b^2) == (c^2)) && ((a+b+c) ==1000)) {
          // cout << a << ' ' << b << ' ' << c << '\n';
          cout << a*b*c << '\n'; 
          return;
        }
      }
    }
  }
} 

int main() {
  solve();
  return 0;
}
