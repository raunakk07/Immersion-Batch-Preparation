#include <bits/stdc++.h>

using namespace std;

void printPrimes(int n) {

  bool isPrime[n + 1];
  for (int i = 0; i <= n; i++) {
    isPrime[i] = true;
  }

  for (int i = 2; i * i <= n; i++) {
    if (isPrime[i]) {
      for (int j = i * i; j <= n; j += i) {
        isPrime[j] = false;
      }
    }
  }

  for (int i = 2; i <= n; i++) {
    if (isPrime[i]) {
      cout << i << " ";
    }
  }
}

int main() {
  int n;
  cin >> n;
  printPrimes(n);

  return 0;
}