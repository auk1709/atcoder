#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 0;
  int i;
  long long y = 100;
  long long x;
  cin >> x;
  // n = ceil((log10(x) - 2) / log10(1.01));
  // if (x < 1000000000) {
  for (i = 0; y < x; i++) {
    y *= 1.01;
  }
  // } else {
  // y = 1000000000;
  // for (i = 1677; y <  x; i++) {
  // y *= 1.01;
  // }
  // }
  cout << i << endl;
}