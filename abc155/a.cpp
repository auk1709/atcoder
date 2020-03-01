#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	bool ans = false;
	if (a == b && a != c || b == c && a != b || a == c && a != b)
	{
		ans = true;
	}
	if (ans)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}