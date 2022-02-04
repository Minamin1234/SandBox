#include <bits/stdc++.h>

using namespace std;

int N, Q;
vector<bitset<101>> users(101,bitset<101>(0));

void Follow(int user, int target);
void ReFollow(int user);
void FollowFollow(int user);
void PrintUsers(vector<bitset<101>> usrs);

void Follow(int user, int target)
{
	users.at(user).set(target, 1);
}

void ReFollow(int user)
{
	for (int i = 1; i <= N; i++)
	{
		if (users.at(i).test(user))
			users.at(user).set(i, 1);
	}
}

void FollowFollow(int user)
{
	auto follows = users.at(user);

	for (int i = 1; i <= N; i++)
	{
		if (follows.test(i) && i != user)
		{
			for (int ii = 1; ii <= N; ii++)
			{
				if (users.at(i).test(ii))
					users.at(user).set(ii,1);
			}
		}
	}
}

void PrintUsers(vector<bitset<101>> usrs)
{
	for (int i = 1; i <= N; i++)
	{
		for (int ii = 1; ii <= N; ii++)
		{
			if (usrs.at(i).test(ii))
				cout << "Y";
			else cout << "N";
		}
		cout << endl;
	}
}


int main()
{
	
	int a, u, t;//action user target;

	cin >> N >> Q;

	for (int i = 0; i < Q; i++)
	{
		cin >> a;

		if (a == 1)
		{
			cin >> u >> t;
			Follow(u, t);
		}
		else if (a == 2)
		{
			cin >> u;
			ReFollow(u);
		}
		else if (a == 3)
		{
			cin >> u;
			FollowFollow(u);
		}

	}

	PrintUsers(users);
	return 0;
}