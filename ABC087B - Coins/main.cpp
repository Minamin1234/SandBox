#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A, B, C, X, cnt = 0;
	priority_queue<pair<int, int>> rank; //(–‡”Cd‰ÝŽí—Þ)
	cin >> A >> B >> C >> X;

	rank.push(make_pair(A, 500));
	rank.push(make_pair(B, 100));
	rank.push(make_pair(C, 50));

	vector<pair<int, int>> rankv;
	while (!rank.empty())
	{
		rankv.push_back(rank.top());
		rank.pop();
	}

	for (int r1 = 0; r1 <= rankv.at(2).first; r1++)
	{
		for (int r2 = 0; r2 <= rankv.at(1).first; r2++)
		{
			for (int r3 = 0; r3 <= rankv.at(0).first; r3++)
			{
				auto a = rankv.at(0).second * r3;
				auto b = rankv.at(1).second * r2;
				auto c = rankv.at(2).second * r1;
				auto x = a + b + c;

				if (x == X) cnt++;
			}
		}
	}

	cout << cnt << endl;
	return 0;
}