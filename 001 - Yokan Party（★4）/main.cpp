#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, L, K, A;
	vector<int> cut;
	priority_queue<pair<int,int>> dists;
	cin >> N >> L >> K;

	for (int i = 0; i < N; i++)
	{
		cin >> A;
		cut.push_back(A);
	}
	//---- ----|----------
	int begindist = 0;
	for (auto i : cut)
	{
		dists.push(
			make_pair(abs(i - begindist), i));

		begindist = i;
	}
	dists.push(
		make_pair(abs(L - begindist), L)
	);

	return 0;
}

/*
* Ex.
7 45
2
7 11 16 20 28 34 38

-----------
0 - 7: 7
7 - 11:4
11 - 16: 5
16 - 20:4 
20 - 28: 8
28 - 34: 6
34 - 38: 4

38 - 45: 7

*/