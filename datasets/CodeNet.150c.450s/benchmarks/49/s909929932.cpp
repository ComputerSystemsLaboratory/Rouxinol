#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdio.h>
#include <list>
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

int main()
{
	int n;
	while (cin >> n,n)
	{
		int max = 0; int min = INF;
		int sum = 0;
		REP(i, n)
		{
			int a;
			cin >> a;
			sum += a;
			if (a > max) max = a;
			if (a < min) min = a;
		}
		sum = sum - max - min;
		cout << sum / (n - 2) << endl;
	}
	return 0;
}