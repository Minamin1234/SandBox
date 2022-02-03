#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, d;
	set<int> mochis;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> d;
		mochis.insert(d);
	}

	cout << mochis.size() << endl;
	return 0;
}