#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, Q, A, L, R;
	
	vector<bool> results;
	cin >> N >> Q;
	vector<int> nums(N, 0);

	for (int i = 1; i < N; i++)
	{
		cin >> A;
		nums.at(i) = A;
	}

	for (int i = 0; i < Q; i++)
	{
		cin >> L >> R;

		double r = 0;
		for (int ii = L; ii <= R; ii++)
		{
			if (ii == L)
				r = nums.at(ii);
			else
				r *= nums.at(ii);
		}

		r = cbrtl(r);
		long long rl = r;
		if ((r - rl) > 0.0) results.push_back(false);
		else results.push_back(true);
	}

	for (auto b : results)
	{
		if (b) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}