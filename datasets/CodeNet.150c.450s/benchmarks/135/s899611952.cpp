#include <algorithm>
#include <cmath>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <cassert>
#include <functional>

using namespace std;

#define LOG(...) printf(__VA_ARGS__)
//#define LOG(...)
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define RSORT(c) sort((c).rbegin(),(c).rend())
#define CLR(a) memset((a), 0 ,sizeof(a))

typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int dx[] = {-1,0,1,0}; const int dy[] = {0,1,0,-1};

int main() {
	int w_n, h_n;
	while(cin >> w_n >> h_n, w_n|h_n){
		map<int, int> ps;
		{
			vi xs;
			int x = 0, dx;
			xs.push_back(x);
			REP(i, w_n){
				cin >> dx;
				x += dx;
				xs.push_back(x);
			}

			int y = 0, dy;
			for(int xx:xs){
				ps[xx-y]++;
			}
			REP(i, h_n){
				cin >> dy;
				y += dy;
				for(int xx:xs){
					ps[xx-y]++;
				}
			}
		}

		int sum = 0;
		for(auto t:ps){
			int n = t.second;
			sum += n*(n-1)/2;
		}

		cout << sum << endl;
	}
}