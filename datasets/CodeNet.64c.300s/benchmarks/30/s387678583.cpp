#include <iostream>
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
#include <sstream>
using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ll long long

int main()
{
	int c[6] = { 500, 100, 50, 10, 5, 1 };
	while (1)
	{
		int n;
		cin >> n; if (n == 0) return 0;
		n = 1000 - n;
		int cnt = 0;
		for (int i = 0; i < 6; i++)
		{
			while (1)
			{
				if (n >= c[i])
				{
					n -= c[i];
					cnt++;
				}
				else break;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}