#include <vector>
#include <numeric>
#include <iostream>

#ifndef UTILS_H
#define UTILS_H

void printVector(std::vector<long long> &v);

long long sumVector(std::vector<long long> &v);

bool isPrime(long long n);

std::vector<long long> getPrimes(long long N);

int getPrimesSum(long long n);

#endif
