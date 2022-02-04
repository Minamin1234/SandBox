#include <bits/stdc++.h>

using namespace std;

void SortS(vector<string> &target)
{
	for (int i = 0; i < target.size(); i++)
	{
		for (int pvt = 0; pvt < target.size(); i++)
		{
			if(target.at(i).at(0) < target.at(pvt).at(0))
		}
	}
}

int main()
{
	string S;
	vector<string> words;

	bool begin = false, end = true;

	cin >> S;

	string word = "";

	for (auto w : S)
	{
		

		if (isupper(w) && end)
		{
			begin = true;
			end = false;
		}
		else if (isupper(w) && begin)
		{
			begin = false;
			end = true;

			word += w;
			words.push_back(word);
			word = "";
			continue;
		}

		word += w;
	}

	sort(words.begin(), words.end());

	string result = "";
	for (auto w : words)
	{
		result += w;
	}

	cout << result << endl;
	return 0;
}