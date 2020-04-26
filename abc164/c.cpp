#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, cnt = 0;
  string a;
  set<string> s;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    cin >> a;
    auto itr = s.find(a);
    if (itr == s.end()) {
      s.insert(a);
      cnt++;
    }
  }

  printf("%d\n", cnt);
}