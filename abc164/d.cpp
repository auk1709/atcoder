#include <bits/stdc++.h>
using namespace std;

int main() {
  int p = 2019;
  string s;
  cin >> s;
  int n = s.size();
  int total = 0;
  int k = 1;
  long long ans = 0;
  vector<int> count(p);
  count[0] = 1;
  reverse(s.begin(), s.end());
  for (int i = 0; i < n; i++) {
    total += (s[i] - '0') * k;
    int mod = total % p;
    ans += count[mod];
    count[mod]++;
    k *= 10;
    k %= p;
  }
  cout << ans << endl;
}