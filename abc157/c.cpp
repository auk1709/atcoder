#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> s(m), c(m);
  for (int i = 0; i < m; i++) {
    cin >> s.at(i) >> c.at(i);
  }

  vector<int> a(n);
  bool flag = true;

  for (int i = 0; i < n; i++) {
    a.at(i) = 0;
  }

  if (n > 1) {
    a.at(0) = 1;
  }

  if (m > 0) {
    for (int i = 0; i < m; i++) {
      if (a.at(s.at(i) - 1) == 0 || a.at(s.at(i) - 1) == c.at(i) ||
          (s.at(i) - 1) == 0 && n > 1 && a.at(s.at(i) - 1) == 1) {
        a.at(s.at(i) - 1) = c.at(i);
      } else {
        flag = false;
        break;
      }
    }
  }

  if (a.at(0) == 0 && n > 1) {
    flag = false;
  }

  if (flag) {
    for (int i = 0; i < n; i++) {
      cout << a.at(i);
    }
  } else {
    cout << -1;
  }
  cout << endl;
}