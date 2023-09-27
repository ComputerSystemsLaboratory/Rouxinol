#include <iostream>
#include <string>
#include <map>

using namespace std;

void solve()
{
	map<string, int> Map;
	string str;
	getline(cin, str);
	str += ' ';
	int n = str.size();
	string temp;
	string LongestWord;
	for(int i = 0; i < n; ++i)
	{
		if(str[i] == ' ')
		{
			++Map[temp];
			if(LongestWord.size() < temp.size())
			{
				LongestWord = temp;
			}
			temp.clear();
		}
		else
		{
			temp += str[i];
		}
	}
	int Max = 0;
	string FrequentWord;
	for(map<string, int>::iterator Ite = Map.begin(); Ite != Map.end(); ++Ite)
	{
		if(Max < Ite->second)
		{
			Max = Ite->second;
			FrequentWord = Ite->first;
		}
	}
	cout << FrequentWord << " " << LongestWord << endl;
}

int main()
{
	solve();
	return(0);
}