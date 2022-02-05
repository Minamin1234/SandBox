#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, A;
	vector<int> cuts;
	priority_queue<int> degs;
	int deg = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int prevd = deg;
		cin >> A;
		cuts.push_back(A);

		deg = (deg + A) % 360;

		degs.push(deg - prevd);
	}


	cout << degs.top() << endl;

	return 0;
}