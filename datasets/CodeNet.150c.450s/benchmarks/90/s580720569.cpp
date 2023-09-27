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

int main()
{
	int n;
	map<int,int> numbers;

	while ( cin >> n )
	{
		numbers[n]++;
	}

	int max = 0;

	for ( map<int,int>::iterator it = numbers.begin(); it != numbers.end(); it++ )
	{
		if ( max < (*it).second )
		{
			max = (*it).second;
		}
	}

	for ( map<int,int>::iterator it = numbers.begin(); it != numbers.end(); it++ )
	{
		if ( (*it).second == max )
		{
			cout << (*it).first << endl;
		}
	}

	return 0;
}