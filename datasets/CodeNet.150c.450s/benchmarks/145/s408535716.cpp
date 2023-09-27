#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>

//#define PI 3.141592653589

using namespace std;


int main()
{
	map<string,int> table;
	string word, ans1, ans2;
	int freq=0, len=0;
	while (cin >> word)
	{
		if (table.find(word) == table.end())
		{
			table[word] = 1;
		} else {
			table[word]++;
		}
		if (table[word] > freq)
		{
			freq = table[word];
			ans1 = word;
		}
		if (word.size()>len)
		{
			len = word.size();
			ans2 = word;
		}
	}
	cout << ans1 << " " << ans2 << endl;
	
	return 0;
}