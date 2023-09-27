#include <iostream>
#include <cstdio>
#include <vector>
#include <string>

using namespace std;
static const int M = 1046527;

vector<string> H(M);

int convertChartoNum(char c)
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
	else
	{
		return(0);
	}
}

long long int getKey(string s)
{
	long long int sum = 0;
	long long int p = 1;
	for (int i = 0; i < s.size(); ++i)
	{
		sum += p * convertChartoNum(s[i]);
		p *= 5;
	}
	return(sum);
}

int h1(int key)
{
	return(key % M);
}

int h2(int key)
{
	return(1 + (key % (M - 1)));
}

int find(string s)
{
	long long int key = 0;
	int h = 0;
	key = getKey(s);
	for (long long int i = 0;; ++i)
	{
		h = (h1(key) + i * h2(key)) % M;
		if (H[h] == s)
		{
			return(1);
		}
		else if (H[h].size() == 0)
		{
			return(0);
		}
	}
	return(0);
}

void insert(string s)
{
	long long key = getKey(s);
	long long h = 0;
	for (long long int i = 0;; ++i)
	{
		h = (h1(key) + i * h2(key)) % M;
		if (H[h] == s)
		{
			return;
		}
		if (H[h].size() == 0)
		{
			H[h] = s;
			return;
		}
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
				cout << "yes" << endl;
			}
			else
			{
				cout << "no" << endl;
			}
		}
	}
}

int main()
{
	solve();
	return(0);
}