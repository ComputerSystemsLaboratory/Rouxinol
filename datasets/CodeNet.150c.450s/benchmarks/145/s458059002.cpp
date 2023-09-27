#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	map<string, int> words;
	string str;
	while (cin >> str)
	{
		if (words.count(str))
		{
			words[str]++;
		}
		else
		{
			words[str] = 1;
		}
	}

	int Max = 0;
	string mode;
	string longest;
	for (auto i : words)
	{
		if (Max < i.second)
		{
			Max = i.second;
			mode = i.first;
		}
		if (longest.size() < i.first.size())
		{
			longest = i.first;
		}
	}
	cout << mode << ' ' << longest << endl;

	return 0;
}