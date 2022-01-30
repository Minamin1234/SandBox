#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	string S;
	vector<int> A;
	cin >> N >> S;
	A.push_back(0);

	for (int i = 0;i < S.size();i++)
	{
		int ii = i + 1;
		A.push_back(0);

		if (ii == 1)
		{
			A.at(ii) = ii;
			swap(A.at(ii - 1), A.at(ii));
		}
		else if (S.at(i) == 'L')
		{
			A.at(ii) = ii;
			swap(A.at(ii - 1), A.at(ii));
		}
		else if (S.at(i) == 'R')
			A.at(ii-1) = ii;
	}
	A.push_back(0);
	for (auto i : A)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}