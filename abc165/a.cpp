#include <bits/stdc++.h>
using namespace std;

int main() {
  int k, a, b;
  bool flg = false;
  cin >> k >> a >> b;
  for (int i = a; i <= b; i++) {
    if (i % k == 0) {
      flg = true;
      break;
    }
  }
  if (flg) {
    cout << "OK" << endl;
  } else {
    cout << "NG" << endl;
  }
}