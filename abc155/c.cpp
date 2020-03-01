#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int max = 0;
	cin >> n;

	vector<string> s(n);
	for (int i = 0; i < n; i++)
	{
		cin >> s.at(i);
	}
	sort(s.begin(), s.end());

	vector<vector<int>> cnt(n, vector<int>(2));

	for (int i = 0; i < n; i++)
	{
		cnt.at(i).at(0) = i;
		cnt.at(i).at(1) = 0;
		for (int j = i; j < n; j++)
		{
			if (s.at(i) == s.at(j))
			{
				cnt.at(i).at(1)++;
				if (max < cnt.at(i).at(1))
				{
					max = cnt.at(i).at(1);
				}
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (max == cnt.at(i).at(1))
		{
			cout << s.at(cnt.at(i).at(0)) << endl;
		}
	}
}