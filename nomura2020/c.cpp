#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e18;

int main() {
  int n;
  cin >> n;
  vector<int> a(n + 1);
  for (int i = 0; i < n + 1; i++) {
    cin >> a[i];
  }
  vector<long long> b(n + 1);
  b[0] = 1 - a[0];
  for (int i = 1; i < n + 1; i++) {
    b[i] = min((2 * b[i - 1]) - a[i], INF);
    if (b[i] < 0) {
      cout << -1 << endl;
      return 0;
    }
  }

  vector<long long> c(n + 1);
  c[n] = a[n];
  for (int i = n - 1; i >= 0; i--) {
    c[i] = min(c[i + 1], b[i]) + a[i];
  }

  long long ans = 0;
  for (int i = 0; i < n + 1; i++) {
    ans += c[i];
  }

  cout << ans << endl;

  return 0;
}