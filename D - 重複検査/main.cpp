#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, A;
	bitset<200001> num;
	bitset<200001> nnum;

	cin >> N;

	int doub, none;
	for (int i = 1; i <= N; i++)
	{
		cin >> A;
		if (num.test(A)) doub = A;
		else num.set(A, 1);
	}

	nnum = ~num;

	for (int i = 1; i <= N; i++)
	{
		if (nnum.test(i))
		{
			cout << doub << " " << i << endl;
			return 0;
		}
			
	}

	cout << "Correct" << endl;
	return 0;
}