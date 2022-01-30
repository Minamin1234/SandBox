#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, A;
	vector<int> nums;
	vector<pair<int, int>> NVal; //oŒ»‰ñ”,’l

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> A;
		bool frag = false;
		for (auto &nv : NVal)
		{
			if (A == nv.second)
			{
				frag = true;
				nv.first++;
				break;
			}
		}
		if (frag == false) NVal.push_back(make_pair(1, A));
	}

	auto max = NVal.at(0);
	for (auto nv : NVal)
	{
		if (max < nv) max = nv;
	}

	cout << max.second << " " << max.first << endl;
	return 0;
}