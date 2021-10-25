#include <iostream>
#include <vector>
#include <map>
using namespace std;

bool isPrime(int n) {
  // check corner cases
  if (n <= 1) return false;
  if (n <= 3) return true;
  if (n%2==0 || n%3==0) return false;

  for (int i = 5; i*i <= n; i+=6)
    if (n%i==0 || n%(i+2)==0)
      return false;

  return true;
}

vector<int> getPrimes(int lower, int upper) {
  vector<int> primes;
  for (int i = lower; i < upper; i++)
    if (isPrime(i))
      primes.push_back(i);

  return primes;
}

void printVector(std::vector<int> &v) {
  cout << "[ ";
  for (int e : v)
    cout << e << ' ';
  cout << "]\n";
}

void printMap(map<int, int> sampleMap) {
  map<int, int>::iterator itr;
  for (itr = sampleMap.begin(); itr != sampleMap.end(); ++itr)
    cout << itr->first << " = " << itr->second << ", ";
  cout << endl;
}
  

void solve() {
  vector<int> primes = getPrimes(0, 100);
  printVector(primes);
  int ans = 0;
  map<int, int> m;
  int sum = 0, count = 0;
  for (int i = 1; i < primes.size(); i++) {
    sum = 0;
    count = 0;
    for (int j = 0; j < i; j++) {
      sum += primes[j]; 
      count++;
    }
    if (sum == primes[i])
      m.insert(pair<int, int>(primes[i], count));
  }
  printMap(m);
}

int main() {
  solve();
  return 0;
}
