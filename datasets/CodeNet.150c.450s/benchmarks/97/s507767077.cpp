#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <fstream>
#include <set>
#include <utility>
#include <algorithm>
#include <queue>
#include <stack>
#include <deque>
#include <numeric>
#include <sstream>
#include <list>
#include <map>
#include <functional>
#include <iterator>

#define rep(i,p,n) for(int i=(int)p;i<(int)n;i++)
#define repp(i,p,n) for(int i=(int)p;i>=(int)n;i--)
#define Sort(x) sort(x.begin(),x.end())
#define PSort(x) sort(begin(x), end(x), pairCompare)
#define ll long long
#define INF 2000000000
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define PI 3.14159265358979
int dx[4] = { -1,0,1,0 }, dy[4] = { 0,1,0,-1 };
using namespace std;

int main(){	
	while (1) {
		vector<pair<int, int>> memo(1);
		memo[0] = mp(200, 200);

		int n;
		cin >> n;
		if (n == 0)break;
		n--;
		rep(i, 0, n) {
			int a, b;
			cin >> a >> b;
			if (b == 0) {
				memo.pb(mp(memo[a].fi - 1, memo[a].se));
			}
			else if (b == 1) {
				memo.pb(mp(memo[a].fi , memo[a].se - 1));
			}
			else if (b == 2) {
				memo.pb(mp(memo[a].fi + 1, memo[a].se));
			}
			else if (b == 3) {
				memo.pb(mp(memo[a].fi, memo[a].se + 1));
			}
			//cout << memo[i+1].fi << " " << memo[i+1].se << endl;
		}

		int minx = INF, maxx = 0, miny = INF, maxy = 0;

		rep(i, 0, memo.size()) {
				minx = min(minx, memo[i].fi);
				maxx = max(maxx, memo[i].fi);
				miny = min(miny, memo[i].se);
				maxy = max(maxy, memo[i].se);
		}
		cout << maxx - minx+1 << " " << maxy - miny+1 << endl;
	}


	

	return 0;
}