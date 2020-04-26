#include <bits/stdc++.h>
using namespace std;

int main() {
  long n, a, b;
  cin >> n >> a >> b;

  long x;
  long base = (n / (a + b)) * a;
  if (n <= (a + b)) {
    if (n <= a) {
      x = n;
    } else {
      x = a;
    }
  } else if (n % (a + b) < a) {
    x = base + n % (a + b);
  } else {
    x = base + a;
  }
  cout << x << endl;
}