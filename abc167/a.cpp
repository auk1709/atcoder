#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s, t;

  cin >> s >> t;
  int res = s.compare(0, s.size(), t, 0, s.size());
  if (res == 0)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}