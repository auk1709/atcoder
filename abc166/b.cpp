#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n + 1);
  vector<int> d(k);
  for (int i = 0; i < n + 1; i++) a[i] = 0;
  for (int i = 0; i < k; i++) {
    cin >> d[i];
    for (int j = 0; j < d[i]; j++) {
      int x;
      cin >> x;
      a[x]++;
    }
  }
  int cnt = 0;
  for (int i = 1; i < n + 1; i++) {
    if (a[i] == 0) {
      cnt++;
    }
  }
  cout << cnt << endl;
}