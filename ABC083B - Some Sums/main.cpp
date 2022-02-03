#include <bits/stdc++.h>

using namespace std;


int GetSum(string x)
{
	int sum = 0;
	//1~10000
	for (auto s : x)
	{
		int cnum = '0';
		int ix = abs(s - cnum);
		sum += ix;
	}

	return sum;
}

int main()
{
	int N, A, B;

	cin >> N >> A >> B;

	int sum = 0;
	for (int i = A; i <= N; i++)
	{
		auto x = GetSum(to_string(i));
		if (x >= A && x <= B) sum += i;
	}

	cout << sum << endl;
	return 0;
}