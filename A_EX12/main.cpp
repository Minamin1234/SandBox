#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;

	bool frag_S = false;
	int sum = 1;
	for (int i = 0; i < S.size(); i+=2)
	{
		if (S.at(i) == '1' && frag_S == false)
		{
			frag_S = true;
			continue;
		}
		
		char op = S.at(i - 1);
		if (op == '+')
			sum++;
		else if (op == '-')
			sum--;
	}
	cout << sum << endl;
}