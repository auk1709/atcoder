#include <bits/stdc++.h>
using namespace std;
// static const unsigned long long MAX 1000000000000000000;

int main() {
  int n;
  cin >> n;
  unsigned long long a = 1;
  int flag = 0;
  int zerof = 0;
  for (int i = 0; i < n; i++) {
    long long v;
    cin >> v;
    if (v == 0) zerof = 1;
    a *= v;
    if (a > 1000000000000000000) flag = 1;
    a %= 1000000000000000001;
  }
  if (zerof == 1) {
    cout << 0 << endl;
  } else if (flag == 1) {
    cout << -1 << endl;
  } else {
    cout << a << endl;
  }
}