#include <bits/stdc++.h>

using namespace std;

int main()
{
	int AF;
	priority_queue<int> nums;

	for (int i = 0; i < 6; i++)
	{
		cin >> AF;

		nums.push(AF);
	}

	nums.pop();
	nums.pop();

	cout << nums.top() << endl;
	return 0;
}