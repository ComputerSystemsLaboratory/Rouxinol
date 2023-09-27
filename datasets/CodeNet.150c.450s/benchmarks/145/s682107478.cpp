#include <iostream>
#include <map>
#include <string>

using namespace std;

void solve()
{
	string word;
	map<string, int> Map;
	string ansLongWord;
	int maxLen = 0;
	while(cin >> word)
	{
		if(maxLen < word.size())
		{
			maxLen = word.size();
			ansLongWord = word;
		}
		++Map[word];
	}
	map<string, int>::iterator it = Map.begin();
	int maxCount = 0;
	string ansFreqWord;
	while(it != Map.end())
	{
		if(maxCount < it->second)
		{
			maxCount = it->second;
			ansFreqWord = it->first;
		}
		++it;
	}
	cout << ansFreqWord << " " << ansLongWord << endl;
}

int main()
{
	solve();
	return(0);
}