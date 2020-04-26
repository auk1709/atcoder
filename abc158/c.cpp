#include <bits/stdc++.h>
using namespace std;

int main() {
  double A, B;
  cin >> A >> B;

  double p, q, r, s;
  p = A / 0.08;
  q = (A + 1) / 0.08;
  r = B / 0.1;
  s = (B + 1) / 0.1;

  vector<int> m(100);
  vector<int> n(100);
  double x = p;
  int i = 0;
  while (x < q) {
    m.at(i) = x;
    x += 1;
    i++;
  }
  double y = r;
  int j = 0;
  while (y < s) {
    n.at(j) = y;
    y += 1;
    j++;
  }

  int ans = -1;
  for (int X : m) {
    for (int Y : n) {
      if (X == Y) {
        ans = X;
        break;
      }
    }
  }
  cout << ans << endl;
}