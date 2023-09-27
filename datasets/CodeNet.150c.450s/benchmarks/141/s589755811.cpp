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

const int dx[] = { -1, 0, 1, 0 }; const int dy[] = { 0, 1, 0, -1 };

struct pos{
	double x;
	double y;
};
int main() {
	vector<pos> point(4);
	while (cin >> point[0].x >> point[0].y >> point[1].x >> point[1].y >> point[2].x >> point[2].y >> point[3].x >> point[3].y){
		double cross[3];
		REP(j, 3){
			cross[j] = (point[(j + 1) % 3].x - point[(j) % 3].x)*(point[3].y - point[(j) % 3].y) - (point[(j + 1) % 3].y - point[(j) % 3].y)*(point[3].x - point[(j) % 3].x);
			
		}
		if ((cross[0]>0 && cross[1]>0 && cross[2]>0) || (cross[0]<0 && cross[1]<0 && cross[2]<0))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}