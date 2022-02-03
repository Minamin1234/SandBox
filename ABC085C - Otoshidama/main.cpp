#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, Y;

	cin >> N >> Y;

	for (int man = 0; man <= N; man++)
	{
		for (int gosen = 0; gosen <= N - man; gosen++)
		{
			int sen = N - (man + gosen);
			long long sum = man * 10000 +
				gosen * 5000 +
				sen * 1000;
			

			if (sum == Y)
			{
				cout << man << " " << gosen << " " << sen << endl;
				return 0;
			}
		}
	}

	cout << "-1 -1 -1" << endl;
	return 0;
}