#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long a, b, c, k, ans = 0;
  cin >> a >> b >> c >> k;

  if (a + b >= k)
  {
    ans = a;
  }
  else
  {
    ans = a - (k - (a + b));
  }

  cout << ans << endl;
}