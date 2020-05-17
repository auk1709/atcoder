#include <bits/stdc++.h>
using namespace std;

void dfs() {}

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(2000000);
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }
}