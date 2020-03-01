#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S;
  cin >> S;

  // ここにプログラムを追記
  int i = 0, x = 1;
  while (i < S.size())
  {
    if (S.at(i) == '+')
    {
      x++;
    }
    else if (S.at(i) == '-')
    {
      x--;
    }
    i++;
  }
  cout << x << endl;
}
