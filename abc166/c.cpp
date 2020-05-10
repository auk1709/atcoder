#include <bits/stdc++.h>
using namespace std;

struct Tower {
  int h;
  vector<int> r;
};
int main() {
  int n, m;
  cin >> n >> m;
  Tower T[n + 1];
  for (int i = 1; i < n + 1; i++) {
    cin >> T[i].h;
  }

  for (int i = 1; i < m + 1; i++) {
    int a, b;
    cin >> a >> b;
    T[a].r.push_back(b);
    T[b].r.push_back(a);
  }
  int ans = 0;
  for (int i = 1; i < n + 1; i++) {
    bool f = true;
    for (int j = 0; j < T[i].r.size(); j++) {
      if (T[i].h <= T[T[i].r[j]].h) {
        f = false;
        continue;
      }
    }
    if (f) {
      ans++;
    }
  }
  cout << ans << endl;
}