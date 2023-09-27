#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <functional>

using namespace std;

class LongerString
{
public:
	bool operator () ( const string &a, const string &b ) const
	{
		return a.length() < b.length();
	}
};

int main()
{
	string word;
	map<string,int> wordsCount;
	vector<string> words;

	while ( cin >> word )
	{
		wordsCount[ word ]++;
		words.push_back( word );
	}

	int max = 0;
	for ( map<string,int>::iterator it = wordsCount.begin(); it != wordsCount.end(); it++ )
	{
		if ( max < (*it).second )
		{
			max = (*it).second;
		}
	}

	for ( map<string,int>::iterator it = wordsCount.begin(); it != wordsCount.end(); it++ )
	{
		if ( max == (*it).second )
		{
			cout << (*it).first << ' ';
		}
	}

	sort( words.begin(), words.end(), LongerString() );

	cout << *words.rbegin() << endl;

	return 0;
}