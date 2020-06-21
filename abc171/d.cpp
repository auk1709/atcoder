#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  long long s = 0;
  vector<long long> a(100005);
  cin >> n;
  for (int i = 0; i < 100005; i++) a[i] = 0;
  for (int i = 0; i < n; i++) {
    long long t;
    cin >> t;
    a[t]++;
    s += t;
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    long long b, c;
    cin >> b >> c;
    a[c] += a[b];
    s -= (a[b] * b);
    s += (c * a[b]);
    a[b] = 0;
    cout << s << endl;
  }
}