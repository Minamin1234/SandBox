#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n;

	cin >> n;

	if (powl(2,n) > (n * n))
	{
		cout << "Yes" << endl;
		return 0;
	}

	cout << "No" << endl;

	return 0;
}