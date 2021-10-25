#include <vector>
#include <numeric>
#include <iostream>

#include "utils.h"

void printVector(std::vector<long long> &v) {
  std::cout << "[ "; 
  for (long long e : v) std::cout << e << ' ';
  std::cout << "]\n";
}

long long sumVector(std::vector<long long> &v) {
  int sum = 0;
  sum = std::accumulate(v.begin(), v.end(), 0);
  return sum; 
}

bool isPrime(long long n) {
  // check corner cases
  if (n <= 1) return false;
  if (n <= 3) return true;
  if (n%2==0 || n%3==0) return false;

  for (long long i = 5; i*i <= n; i+=6)
    if (n%i==0 || n%(i+2)==0)
      return false;

  return true;
}

std::vector<long long> getPrimes(long long N) {
  std::vector<long long> primes;
  for (long long i = 2; i < N; i++)
    if (isPrime(i))
      primes.push_back(i);

  return primes;
}

int getPrimesSum(long long N) {
  std::vector<long long> primes;
  primes = getPrimes(N);
  return sumVector(primes);
}

// TODO: Factorial function for big integers
