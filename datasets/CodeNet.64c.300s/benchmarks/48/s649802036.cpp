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
#define INF 1145141919
#define ll long long
//#define scanf scanf_s
bool p[1000005];
int main()
{

	REP(i, 1000000) p[i] = true;
	p[0] = p[1] = false;
	for (int i = 2; i*i <= 1000000; i++)
	{
		if (p[i] == true)
		{
			for (int j = 2; j*i <= 1000000; j++)
			{
				p[i*j] = false;
			}
		}
	}
	int n;
	while (cin >> n)
	{
		int cnt = 0;
		REP(i, n + 1)
		{
			if (p[i] == true) cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}