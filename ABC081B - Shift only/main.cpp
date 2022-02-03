#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, A, cnt=0;
	vector<int> v;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> A;
		v.push_back(A);
	}

	for (auto i : v)
		if (i % 2 == 1) goto End;

	while (true)
	{
		for (auto& i : v)
		{
			i /= 2;
			if (i % 2 == 1)
			{
				cnt++;
				goto End;
			}
		}
		cnt++;
	}
End:

	cout << cnt << endl;
	return 0;
}