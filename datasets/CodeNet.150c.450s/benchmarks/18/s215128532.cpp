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
	cin >> n;
	int deb = 100000;
	REP(i, n)
	{
		deb *= 1.05;
		if (deb % 1000 != 0)
		{
			deb = (deb / 1000 + 1)*1000;
		}
	}
	cout << deb << endl;
	return 0;
}