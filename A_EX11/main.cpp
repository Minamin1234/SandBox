#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, A;
	cin >> N >> A;
	string op;
	int B;

	for (int i = 1; i <= N; i++)
	{
		cin >> op >> B;

		if (op == "+")
			A += B;
		else if (op == "-")
			A -= B;
		else if (op == "*")
			A *= B;
		else if (op == "/")
		{
			if (B == 0)
			{
				cout << "error" << endl;
				break;
			}
			A /= B;
		}
		cout << i << ":" << A << endl;
	}

	return 0;
}