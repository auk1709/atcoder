#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  if (s.size() > n) {
    for (int i = 0; i < n; i++) {
      cout << s[i];
    }
    cout << "...";
  } else {
    cout << s;
  }
  cout << endl;
}