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

int n;
int main()
{
	bool prime[1000005];
	memset(prime, true, 1000005);
	prime[0] = false; prime[1] = false;
	for (int i = 2; i*i < 1000005; i++)
	{
		if (prime[i] == true)
		{
			for (int j = 2; i*j < 1000005; j++)
			{
				prime[i*j] = false;
			}
		}
	}
	while (cin >> n)
	{
		int cnt = 0;
		REP(i, n+1)
		{
			if (prime[i] == true)
			{
				cnt++;
				//cout << i << endl;
			}
		}
		cout << cnt << endl;
	}

	return 0;
}