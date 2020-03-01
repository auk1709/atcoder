#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a.at(i);
	}

	bool ans = true;

	for (int y : a)
	{
		if (y % 2 == 0)
		{
			if (y % 3 != 0 && y % 5 != 0)
			{
				ans = false;
				break;
			}
		}
		else
		{
			continue;
		}
	}

	if (ans)
	{
		cout << "APPROVED" << endl;
	}
	else
	{
		cout << "DENIED" << endl;
	}
}