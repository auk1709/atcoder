#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }

  map<int, int> cnt;
  for (int i = 0; i < n; i++) {
    if (cnt.count(a.at(i))) {
      cnt.at(a.at(i))++;
    } else {
      cnt[a.at(i)] = 1;
    }
  }

  int ans = 0, num = 0;
  for (auto p : cnt) {
    auto q = p.first;
    auto r = p.second;
    if (r > num) {
      ans = q;
      num = r;
    }
  }
  cout << ans << " " << num << endl;
}