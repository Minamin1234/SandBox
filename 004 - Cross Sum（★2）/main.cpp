#include <bits/stdc++.h>

using namespace std;

int main()
{
	int H, W, A;
	
	cin >> H >> W;
	vector<vector<int>> mtrx(H,vector<int>(W,0));
	vector<vector<int>> result(H, vector<int>(W, 0));

	for (auto& h : mtrx)
	{
		for (auto& w : h)
		{
			cin >> A;
			w = A;
		}
	}

	int sumh = 0, sumw = 0;
	for (int h = 0; h < H; h++)
	{
		for (int w = 0; w < W; w++)
		{
			for (int ph = 0; ph < H; ph++)
				sumh += mtrx.at(ph).at(w);

			for (int pw = 0; pw < W; pw++)
			{
				if (pw == w) continue;
				sumw += mtrx.at(h).at(pw);
			}

			result.at(h).at(w) = sumh + sumw;
			sumh = sumw = 0;
		}
	}

	for (auto& h : result)
	{
		for (auto& w : h)
			cout << w << " ";
		cout << endl;
	}

	return 0;
}