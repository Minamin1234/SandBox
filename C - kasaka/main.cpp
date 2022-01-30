#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;
	cin >> S;

	int a_cnt = 0;
	bool isPalind = false;
	for (int i = 0; i < S.size() / 2; i++)
	{
		char c = S.at(i);
		if (S.at(i) == 'a') a_cnt++;
		if (S.at(i) != S.at(S.size() - (1 + i)))
		{
			if (a_cnt == 0)
			{
				isPalind = false;
			}
		}
		isPalind = true;
	}
	if (a_cnt >= 1)
	{
		bool frag = false;
		while (a_cnt > 0)
		{
			S = 'a' + S;
			a_cnt--;
			for (int i = 0; i < S.size() / 2; i++)
			{
				if (S.at(i) != S.at(S.size() - (1 + i)))
				{
					frag = false;
					break;
				}
				frag = true;
			}
		}
		isPalind = frag;
	}
	if (isPalind)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}