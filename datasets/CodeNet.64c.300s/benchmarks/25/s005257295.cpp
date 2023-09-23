#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdio.h>
#include <vector>
#include <stack>
#include <queue>
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
//#define scanf scanf_s

int a[4]; int b[4];

int main()
{
	while (cin >> a[0])
	{
		FOR(i, 1, 4) cin >> a[i];
		REP(i, 4) cin >> b[i];
		int hit = 0;
		int blow = 0;
		REP(i, 4)
		{
			if (a[i] == b[i]) hit++;
			else
			{
				REP(j, 4)
				{
					if (a[i] == b[j]) blow++;
				}
			}
		}
		cout << hit << " " << blow << endl;
	}
	return 0;
}