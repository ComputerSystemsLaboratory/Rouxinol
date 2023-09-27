#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <cstring>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <bitset>

#define FOR(i,b,n) for(int i=b;i<n;i++)
#define RFOR(i,b,n) for(int i=n-1;i>=b;i--)
#define CLR(mat) memset(mat, 0, sizeof(mat))
#define NCLR(mat) memset(mat, -1, sizeof(mat))

using namespace std;

static const double EPS = 1e-9;
typedef long long ll;
typedef pair<int, int> paii;

int r, c;
bitset<10000> plate[10];

int solve()
{
	int res = 0;
	bitset<10000> tmp[10];
	
	FOR(k, 0, 1<<r)
	{
		FOR(i, 0, r)
			tmp[i] = plate[i];
		
		FOR(i, 0, r)
		{
			if(k & (1<<i))
				tmp[i].flip();
		}
		
		int zsum = 0;
		
		FOR(i, 0, c)
		{
			int zeros = 0;
			
			FOR(j, 0, r)
			{
				if(tmp[j][i] == false)
					zeros++;
			}
			
			zeros = max(r-zeros,zeros);
			zsum += zeros;
		}
		
		res = max(res, zsum);
	}
	
	return res;
}

int main()
{
	while(cin >> r >> c, (r||c))
	{
		int b;
		CLR(plate);
		
		FOR(j, 0, r)
			FOR(i, 0, c)
			{
				cin >> b;
				plate[j][i] = (b >= 1)? true : false;
			}
		
		cout << solve() << endl;
	}
	
	return 0;	
}