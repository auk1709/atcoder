#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a(100000);
void check(long long* ans, long long* now, long long base, int i) {
  long long before;
  if (*now + a[i - 1] <= base) {
    before = *now;
    *now = *now + a[i - 1];
  } else if ((((*now + 1) / 2) + a[i - 1]) <= base) {
    before = *now;
    *now = base;
  } else {
    *now--;
    *ans--;
    if (*now < (before + 1) / 2) {
      *ans = -1;
      return;
    }
    check(ans, now, base, i);
  }
}

int main() {
  cin >> n;
  for (int i = 0; i < n + 1; i++) {
    cin >> a[i];
  }

  long long ans = 0, now = a[n];
  long long before;
  for (int i = n; i >= 0; i--) {
    ans += now;
    if (i == 0) break;
    long long base = pow(2, i - 1);
    check(&ans, &now, base, i);
    if (ans == -1) break;
    // if (now + a[i - 1] <= base) {
    //   before = now;
    //   now = now + a[i - 1];
    // } else if ((((now + 1) / 2) + a[i - 1]) <= base) {
    //   before = now;
    //   now = base;
    // } else {
    //   now--;
    //   ans--;
    //   if (now < (before + 1) / 2) {
    //     ans = -1;
    //     break;
    //   }
    // }
  }

  cout << ans << endl;

  return 0;
}