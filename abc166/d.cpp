#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin >> x;
  int a, b;
  for (int i = 0; i < 3000; i++) {
    for (int j = 0; j < 3000; j++) {
      if (pow(i - 1500, 5) - pow(j - 1500, 5) == x) {
        a = i - 1500;
        b = j - 1500;
      }
    }
  }
  cout << a << " " << b << endl;
}