#include <cstdio>
#include <stack>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define llong long long
#define INF 999999999
#define pb(a) push_back(a)

using namespace std;

vector<string> split(string str, char delim)
{
	vector<string> res;
	size_t current = 0, found;
	while ((found = str.find_first_of(delim, current)) != string::npos)
	{
		string tmp = string(str, current, found - current);
		res.push_back(tmp);
		current = found + 1;
	}
	string tmp = string(str, current, found - current);
	tmp.replace(tmp.size() - 1, tmp.size(), "\0");
	res.push_back(string(str, current, str.size() - current));
	return res;
}

char *StrToLower(char *s)
{
	char *p;
	for (p = s; *p; p++)
	{
		*p = tolower(*p);
	}
	return s;
}

int main()
{
	int cnt[26] = {0};
	char cstr[1201];
	bool isEnd = false;


	while (cin >> cstr)
	{
		string str = cstr;
		string word = StrToLower(cstr);

		REP(i, str.size())
		{
			cnt[cstr[i] - 'a']++;
			if (cin.eof()) { isEnd = true; break; }
		}

		if (isEnd)break;
	}

	REP(i, 26)
	{
		printf("%c : %d\n", 'a' + i, cnt[i]);
	}
}