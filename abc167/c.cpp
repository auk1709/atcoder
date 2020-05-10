#include <bits/stdc++.h>
using namespace std;

int n, m, x, ans = 10000000;
vector<int> s(12);
vector<int> c(12);
vector<vector<int>> a(12, vector<int>(12));

void rec(int i)
{
  if (i = n)
  {
    cout << i << endl;
    bool f = true;
    int tot = 0;
    for (int j = 0; j < m; j++)
    {
      int tmp = 0;
      tot += c[j];
      for (int k = 0; k < n; k++)
      {
        if (s[k] == 1)
        {
          tmp += a[k][j];
        }
      }
      if (tmp < x)
      {
        f = false;
        break;
      }
    }
    for (int j = 0; j < n; j++)
    {
      tot += c[j];
    }
    if (f)
    {
      ans = min(ans, tot);
    }
    return;
  }

  rec(i + 1);
  s[i] = 1;
  rec(i + 1);
  s[i] = 0;
}

void solve()
{
  for (int i = 0; i < n; i++)
  {
    s[i] = 0;
  }
  rec(0);
}

int main()
{
  cin >> n >> m >> x;
  for (int i = 0; i < n; i++)
  {
    cin >> c[i];
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }

  bool flag = true;
  for (int i = 0; i < m; i++)
  {
    int t = 0;
    for (int j = 0; j < n; j++)
    {
      t += a[j][i];
    }

    if (t < x)
    {
      flag = false;
      break;
    }
  }

  solve();

  if (flag)
  {
    cout << ans << endl;
  }
  else
  {
    cout << -1 << endl;
  }
}