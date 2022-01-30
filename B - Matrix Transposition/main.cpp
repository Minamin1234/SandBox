#include <bits/stdc++.h>

using namespace std;

int main()
{
	int H, W;
	cin >> H >> W;
	vector<vector<int>> mtrx(W,vector<int>(H,0));
	
	for (int h = 0; h < H; h++)
	{
		for (int w = 0; w < W; w++)
		{
			int val;
			cin >> val;
			mtrx.at(w).at(h) = val;
		}
	}

	for (int h = 0; h < mtrx.size(); h++)
	{
		for (int w = 0; w < mtrx.at(h).size(); w++)
		{
			cout << mtrx.at(h).at(w);
			if (w == mtrx.at(h).size() - 1)
				cout << endl;
			else cout << " ";
		}
	}
	return 0;
}