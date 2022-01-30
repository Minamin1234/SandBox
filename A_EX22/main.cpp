#include <bits/stdc++.h>


using namespace std;

int main()
{
	int N;
	vector<pair<int, int>> pairs;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int a1, a2;
		cin >> a1 >> a2;
		pairs.push_back(make_pair(a1, a2));
	}

	for (int i = 0; i < N; i++)
	{
		pair<int, int>& min = pairs.at(0);
		for (int pvt = 0; pvt < N; pvt++)
		{
			for (int i = pvt+1; i < N; i++)
			{
				if (pairs.at(i).second < pairs.at(pvt).second)
					swap(pairs.at(pvt), pairs.at(i));
			}
		}
	}

	for (auto v : pairs)
		cout << v.first << " " << v.second << endl;

	return 0;
}