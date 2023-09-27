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

char *StrToUpper(char *s)
{
	char *p;
	for (p = s; *p; p++)
	{
		*p = toupper(*p);
	}
	return s;
}

int main()
{
	char cword[11];
	cin >> cword;

	int cnt = 0;

	while (1)
	{
		char cstr[1001];
		cin >> cstr;

		if (string(cstr).find("END_OF_TEXT") != string::npos) break;

		string word = StrToUpper(cword);
		vector<string> vec = split(StrToUpper(cstr), ' ');
		//transform(word.begin(), word.end(), word.begin(), toupper);
		//transform(str.begin(), str.end(), str.begin(), toupper);
		int num = 0;

		for (int i = 0; i < vec.size(); i++)
		{
			if (vec[i] == word) cnt++;
		}
	}

	printf("%d\n", cnt);
}