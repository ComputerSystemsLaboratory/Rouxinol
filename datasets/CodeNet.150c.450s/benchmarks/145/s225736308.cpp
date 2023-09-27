#include <iostream>
#include <string>
#include <map>

using namespace std;

void solve()
{
	string str;
	getline(cin, str);
	string word[1000];

	int pos = 0;
	int n = str.size();
	for(int i = 0; i < n; ++i)
	{
		if(str[i] == ' ')
		{
			pos++;
		}
		else
		{
			word[pos] += str[i];
		}
	}
	pos++;
	map<string, int> Map;
	for(int i = 0; i < pos; ++i)
	{
		Map[word[i]]++;
	}
	int frequency = 0;
	for(map<string, int>::iterator Ite = Map.begin(); Ite != Map.end(); ++Ite)
	{
		if(frequency < (*Ite).second)
		{
			frequency = (*Ite).second;
		}
	}
	int max_length = 0;
	for(int i = 0; i < pos; ++i)
	{
		if(max_length < word[i].size())
		{
			max_length = word[i].size();
		}
	}
	for(map<string, int>::iterator Ite = Map.begin(); Ite != Map.end(); ++Ite)
	{
		if(frequency == (*Ite).second)
		{
			cout << (*Ite).first << " ";
			break;
		}
	}
	for(int i = 0; i < pos; ++i)
	{
		if(max_length == word[i].size())
		{
			for(int j = 0; j < max_length; ++j)
			{
				cout << word[i][j];
			}
			cout << endl;
			break;
		}
	}
}

int main()
{
	solve();
	return(0);
}