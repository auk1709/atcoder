#include <bits/stdc++.h>
using namespace std;

int main() {
  string t;
  cin >> t;
  for (int i = 0; t[i] != '\0'; i++) {
    if (t[i] == '?') {
      t[i] = 'D';
    }
  }
  cout << t << endl;
}