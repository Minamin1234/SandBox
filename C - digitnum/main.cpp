#include <bits/stdc++.h>

using namespace std;

int f(int x)
{
	string s = to_string(x);
	return s.size();
}

int main()
{
	int N;

	cin >> N;

	auto res = 0;

	for (int i = 1; i <= N; i++)
		res += i;

	res = res % 998244353;

	cout << res << endl;
	return 0;
}