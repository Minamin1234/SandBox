#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, A;
	vector<int> ints;
	vector<string> result;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> A;
		ints.push_back(A);
	}

	int prev = ints.at(0);
	bool isBegin = true;
	for (auto i : ints)
	{
		if (isBegin)
		{
			isBegin = false;
			continue;
		}

		int res = i - prev;
		if (res > 0)
		{
			string r = "up " + to_string(res);
			result.push_back(r);
		}
		else if (res == 0)
		{
			string r = "stay ";
			result.push_back(r);
		}
		else if (res < 0)
		{
			string r = "down " + to_string(abs(res));
			result.push_back(r);
		}

		prev = i;
	}

	for (auto r : result)
		cout << r << endl;

	return 0;
}