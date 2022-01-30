#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;//おおわれているシートの枚数．
	long long L; //橋の長さ
	long long W;//シートの長さ
	cin >> N >> L >> W;

	int error = 0;
	vector<long long> SheetLocation;
	for (int i = 0; i < N; i++)
	{
		long long location;
		cin >> location;
		SheetLocation.push_back(location);
	}
	for (int i = 0; i < SheetLocation.size(); i++)
	{
		for (int idx = 0; idx < SheetLocation.size(); idx++)
		{
			if (SheetLocation.at(i) < SheetLocation.at(idx))
			{
				long long val = SheetLocation.at(i);
				SheetLocation.at(i) = SheetLocation.at(idx);
				SheetLocation.at(idx) = val;
			}
		}
	}
	auto result = L - (N * W);
	for (int i = 0; i < SheetLocation.size() - 1; i++)
	{
		if (SheetLocation.at(i + 1) < SheetLocation.at(i) + W)
			error += abs(SheetLocation.at(i + 1) - (SheetLocation.at(i) + W));
	}
	result += error;
	auto resultd = result / (long long)W;
	result /= W;
	/*if (resultd - (long long)result > 0.0)
	{
		result++;
	}*/
	cout << result << endl;
	return 0;
}