#include <bits/stdc++.h>
using namespace std;
const int INF = 1000000000;

int n, m, x, ans = INF;
vector<int> c(12);
vector<vector<int>> a(12, vector<int>(12));

int main() {
  cin >> n >> m >> x;
  for (int i = 0; i < n; i++) {
    cin >> c[i];
    for (int j = 0; j < m; j++) cin >> a[i][j];
  }

  for (int s = 0; s < (1 << n); s++) {
    int cost = 0;
    vector<int> d(m);
    for (int i = 0; i < n; i++) {
      if (s & 1 << i) {
        cost += c[i];
        for (int j = 0; j < m; j++) d[j] += a[i][j];
      }
    }
    bool ok = true;
    for (int j = 0; j < m; j++)
      if (d[j] < x) ok = false;
    if (ok) ans = min(ans, cost);
  }

  if (ans == INF)
    cout << -1 << endl;
  else
    cout << ans << endl;
}