#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdio.h>
#include <list>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>
#include <utility>
#include <string>
#include <ctype.h>
#include <cstring>
#include <cstdio>
#include <sstream>
#include <functional>

using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ll long long
#define ALL(a) (a).begin(),(a).end()
#define SORT(v) sort(ALL(v))
//#define scanf scanf_s

int main()
{
	int n, p;
	while (cin >> n >> p, n)
	{
		int m[55] = {};
		int wan = p;
		int i, j;
		j = 0;
		for (i = 1; i < 1000005; i++)
		{
			if (wan>0)
			{
				wan--;
				m[j]++;
				if (m[j] == p)
				{
					cout << j << endl;
					break;
				}
			}
			else
			{
				wan += m[j];
				m[j] = 0;
			}

			j++;
			if (j >= n) j = 0;
		}
	}
	return 0;
}