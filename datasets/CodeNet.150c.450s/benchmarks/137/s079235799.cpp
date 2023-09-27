#include <iostream>
#include <cstdio>
#include <string>

using namespace std;
static const int M = 22370000;
bool Hash[M];

inline int convertChartoNum(char c)
{
	if (c == 'A')
	{
		return(1);
	}
	else if (c == 'C')
	{
		return(2);
	}
	else if (c == 'G')
	{
		return(3);
	}
	else if (c == 'T')
	{
		return(4);
	}
}

int getKey(string s)
{
	int sum = 0;
	int p = 1;
	for (int i = 0; i < s.size(); ++i)
	{
		sum += p * convertChartoNum(s[i]);
		p *= 4;
	}
	return(sum);
}

int find(string s)
{
	int key = getKey(s);
	if (Hash[key])
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

void insert(string s)
{
	int key = getKey(s);
	if (Hash[key])
	{
		return;
	}
	else
	{
		Hash[key] = true;
		return;
	}
}

void solve()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string command, str;
		cin >> command >> str;
		if (command[0] == 'i')
		{
			insert(str);
		}
		else
		{
			if (find(str) == 1)
			{
				printf("yes\n");
			}
			else
			{
				printf("no\n");
			}
		}
	}
}

int main()
{
	solve();
	return(0);
}