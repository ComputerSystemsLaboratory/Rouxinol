#include <algorithm>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <locale>
#include <numeric>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>
#include <map>


using namespace std;

int main()
{
	for(;;)
	{
		int n,m;
		cin >> n >> m;
		if(!n && !m) break;

		multimap<int,int> road;
		for(int i = 0; i < n; i++)
		{
			int d,p;
			cin >> d >> p;
			road.insert(make_pair(p,d));
		}

		multimap<int,int>::iterator itr = road.end();
		itr--;
		for(;;itr--)
		{
			if(m >= itr->second)
			{
				m -= itr->second;
				itr->second = 0;
			}
			else
			{
				itr->second -= m;
				m = 0;
				break;
			}

			if(itr == road.begin()) break;
		}

		int sum = 0;
		for(itr = road.begin(); itr != road.end(); itr++)
		{
			sum += itr->first * itr->second;
		}

		cout << sum << endl;
	}

	return 0;
}
