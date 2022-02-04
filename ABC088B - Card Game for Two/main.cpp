#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, Alice = 0, Bob = 0;
	priority_queue<int> cards;
	bool Is_Alice = true;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		cards.push(a);
	}

	while (!cards.empty())
	{
		if (Is_Alice)
		{
			Alice += cards.top();
			Is_Alice = false;
		}
		else
		{
			Bob += cards.top();
			Is_Alice = true;
		}
		cards.pop();
	}

	int result = Alice - Bob;

	cout << result << endl;
	return 0;
}