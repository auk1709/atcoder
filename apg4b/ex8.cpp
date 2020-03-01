#include <bits/stdc++.h>
using namespace std;

int main()
{
  int p;
  cin >> p;

  int price;
  int N;
  // パターン1
  if (p == 1)
  {
    cin >> price >> N;
  }

  string text;
  // パターン2
  if (p == 2)
  {
    cin >> text >> price >> N;
    cout << text << "!" << endl;
  }

  cout << price * N << endl;
}
