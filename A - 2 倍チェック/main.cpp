#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;
	int s;

	cin >> S;

	for (auto w : S)
	{
		if (w < '0' || w > '9')
		{
			cout << "error" << endl;
			return 0;
		}
	}

	cout << stoi(S) * 2 << endl;

	return 0;
}