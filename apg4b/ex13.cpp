#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> A(N);
  int sum = 0, ave = 0;
  for (int i = 0; i < N; i++)
  {
    cin >> A.at(i);
    sum += A.at(i);
  }

  ave = sum / N;

  for (int i = 0; i < N; i++)
  {
    if (A.at(i) - ave < 0)
    {
      cout << ave - A.at(i) << endl;
    }
    else
    {
      cout << A.at(i) - ave << endl;
    }
  }
}
