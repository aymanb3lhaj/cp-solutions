#include <iostream>
#include <stdlib.h>
#include <numeric>
#include <vector>
#include <math.h>
using namespace std;

int MAX = 100;

void solve() {
  int sumOfSquares = 0, squareOfSum = 0;
  vector<int> v(MAX);
  iota(v.begin(), v.end(), 1);
  squareOfSum = pow(accumulate(v.begin(), v.end(), 0), 2);
  for (int i = 1; i < MAX+1; i++) {
    sumOfSquares += pow(i, 2);
  }
  // cout << sumOfSquares << ' ' << squareOfSum << '\n';
  cout << abs(sumOfSquares - squareOfSum) << '\n'; 
}

int main() {
  solve();
  return 0;
}
