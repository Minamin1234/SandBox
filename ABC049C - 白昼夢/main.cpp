#include <bits/stdc++.h>

using namespace std;

priority_queue<pair<int, string>> keywords;

bool EraseWord(string before, string& result)
{
	auto copy = keywords;
	while (!copy.empty())
	{
		string rword = "";
		string r = "";
		for (int s = 0; s < copy.top().first; s++)
		{
			if (copy.top().first > before.size()) goto WEND;
			rword += before.at(s);
			
			
			if (s == copy.top().first - 1)
			{
				for (int i = s + 1; i < before.size(); i++)
					r += before.at(i);
			}
		}

		if (rword == copy.top().second)
		{
			result = r;
			return true;
		}
	WEND:
		copy.pop();
	
	}

	return false;
}

int main()
{
	string S;

	keywords.push(make_pair(5, "dream"));
	keywords.push(make_pair(7, "dreamer"));
	keywords.push(make_pair(5, "erase"));
	keywords.push(make_pair(6, "eraser"));


	cin >> S;

	while (S.size() != 0)
	{
		if (EraseWord(S, S) == false)
		{
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;
	return 0;
}