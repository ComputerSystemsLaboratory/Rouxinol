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
	int n, r;
	while (cin >> n >> r, n)
	{
		int p, c;
		vector<int> deck;
		vector<int> tmp;
		REP(i, n) deck.push_back(n - i);
		REP(s, r)
		{
			tmp = deck;
			cin >> p >> c;
			REP(i, c)
			{
				deck[i] = tmp[p + i - 1];
			}
			REP(i, p - 1)
			{
				deck[i + c] = tmp[i];
			}

		}
		cout << deck[0] << endl;
	}
	return 0;
}