#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int N,A;
	cin >> N;
	vector<int> values;
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> A;
		values.push_back(A);
		sum += A;
	}
	sum /= N;
	for (int i = 0; i < N; i++)
	{
		cout << abs(sum - values.at(i)) << endl;
	}

	return 0;
}