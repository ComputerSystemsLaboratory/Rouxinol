#define _USE_MATH_DEFINES
#include <iostream>
#include <complex>
#include <algorithm>
#include <vector>
#include <stack>
#include <string>
#include <queue>
#include <cmath>
#include <math.h>
#include <numeric>
#include <list>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <climits>
#include <set>
#include <memory.h>
#include <memory>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cassert>
#include <map>
#include <cassert>
#include <time.h>
#include <ctime>

using namespace std;

typedef complex<double> xy_t;
typedef pair<xy_t, xy_t> line;
typedef long long ll;
typedef pair<int, int> P;
typedef pair<int , P> PP;
typedef pair<int, string> Ps;
typedef vector<int> vec;
typedef vector<vec> mat;
const int INF = 1 << 27;
const double EPS = 1e-9;
const double PI = 3.1415926535897932384626433832795;
const int CLK = CLOCKS_PER_SEC;

#define rep(i, n) for(int i = 0; i < n; i++)
#define rep2(i, m, n) for(int i = m; i < n; i++)

map<int, bool> mp;
int cost[20][20];
int main(){
	int n, a, b, c;
	int cnt;
	while(cin >> n && n){
		mp.clear();
		cnt = 0;
		fill(&cost[0][0], &cost[19][19] + 1, INF);
		rep(i, n){
			cin >> a >> b >> c;
			if(!mp[a]){
				mp[a] = true;
				cnt++;
				cost[a][a] = 0;
			}
			if(!mp[b]){
				mp[b] = true;
				cnt++;
				cost[b][b] = 0;
			}
			cost[a][b] = cost[b][a] = min(cost[a][b], c);
		}
		rep(k, cnt)rep(i, cnt)rep(j, cnt) cost[i][j] = min(cost[i][k]+cost[k][j], cost[i][j]);
		int id = 0;
		int best = INF;
		rep(i, cnt){
			int c = 0;
			rep(j, cnt)c+=cost[i][j];
			if(c < best){
				best = c;
				id = i;
			}
		}
		cout << id << " " << best << endl;
	}
	return 0;
}