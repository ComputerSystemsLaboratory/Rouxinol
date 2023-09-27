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
using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ll long long


int main()
{
	int n;
	while (cin >> n)
	{
		int cnt = 0;
		REP(i, 10)REP(j, 10)REP(k, 10)REP(l, 10)
		{
			if (i + j + k + l == n)
			{
				cnt++;
			//	cout << i << " " << j << " " << k << " " << l << endl;
			}
		}
		cout << cnt<<endl;
	}
	return 0;
}