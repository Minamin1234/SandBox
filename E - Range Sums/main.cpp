#include <bits/stdc++.h>

using namespace std;

int main()
{
	//‚Ò‚¦‚ñ
	int N, Q, l, r;
	bitset<200001> sums;
	cin >> N >> Q;

	for (int i = 0; i < Q; i++)
	{
		cin >> l >> r;

		for (int ii = l; ii <= r; ii++)
			sums.set(ii, 1);
	}

	for (int i = 1; i <= N; i++)
	{
		if (!sums.test(i))
		{
			cout << "No" << endl;
			return 0;
		}
	}

	cout << "Yes" << endl;
	return 0;
}