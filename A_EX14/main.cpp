#include <bits/stdc++.h>
using namespace std;

int main() {
	int A, B, C;
	cin >> A >> B >> C;

	int max = (A > B ? A : B);
	max = max > C ? max : C;
	
	int min = A < B ? A : B;
	min = min < C ? min : C;
	cout << abs(max - min) << endl;

	return 0;
}