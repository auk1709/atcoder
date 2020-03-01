#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, A;
  cin >> N >> A;

  // ここにプログラムを追記
  int x, b, i;
  string op;
  for (i = 0; i < N; i++)
  {
    cin >> op >> b;
    if (op == "+")
    {
      A += b;
    }
    else if (op == "-")
    {
      A -= b;
    }
    else if (op == "*")
    {
      A *= b;
    }
    else if (op == "/")
    {
      if (b == 0)
      {
        cout << "error" << endl;
        break;
      }
      A /= b;
    }
    cout << i + 1 << ":" << A << endl;
  }
}
