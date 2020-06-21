#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;
  string s;
  while (n > 0) {
    long long t = (n) % 26;
    char v;
    if (t == 0) {
      v = 'z';
      n -= 26;
    } else {
      v = 'a' + t-1;
    }
    s = v + s;
    n /= 26;
  }
  cout << s << endl;
}