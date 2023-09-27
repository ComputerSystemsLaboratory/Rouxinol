#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <cmath>
#include <utility>
#include <functional>
using namespace std;

#define FOR(i,s,e) for (int i = int(s); i != int(e); i++)
#define REP(i,e) for (int i = 0; i != int(e); i++)
#define FORIT(i, A) for (auto i : A)
#define ISEQ(c) (c).begin(), (c).end()
#define PRINT(x) cout << (x) << endl
#define SZ(x) ((int)(x).size())


int main(int argc, char const *argv[])
{
	while(true)
	{
		int n, m;
		scanf("%d %d", &n, &m);
		if (n == 0 && m == 0) break;
		vector<pair<int, int> > load;
		REP(i, n)
		{
			int d, p;
			scanf("%d %d", &d, &p);
			load.push_back(make_pair(p, d));
		}
		sort(load.begin(), load.end(), std::greater<pair<int, int> >());
		int ans = 0;
		REP(i, n)
		{
			if (m < load[i].second)
			{
				ans += (load[i].second - m) * load[i].first;
				m = 0;
			}
			else
			{
				m -= load[i].second;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}