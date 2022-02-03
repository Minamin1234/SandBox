#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b;

	cin >> a >> b;

	auto c = a * b;

	if (c % 2 == 0) cout << "Even" << endl;
	else cout << "Odd" << endl;
	return 0;
}