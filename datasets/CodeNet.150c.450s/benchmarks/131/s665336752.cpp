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
	int a, l;
	while (cin >> a >> l, l)
	{
		map<int, int> used;
		used[a] = 0;
		int cnt = 1;
		while (true)
		{
			string s = to_string(a);
			vector<int> v;
			REP(i, s.size()) v.push_back(s[i]-'0');
			while (v.size() != l) v.push_back(0);
			SORT(v);
			int min = 0; int max = 0;
			int t = 1;
			REP(i, l)
			{
				max += v[i] * t;
				t *= 10;
			}
			t = 1;
			REP(i, l)
			{
				min += v[l - i - 1] * t;
				t *= 10;
			}
			a = max - min;
			if (used.find(a) == used.end()) used[a] = cnt;
			else
			{
				cout << used[a] << " " << a << " " << cnt - used[a] << endl;
				break;
			}
			cnt++;
		}
	}
	return 0;
}