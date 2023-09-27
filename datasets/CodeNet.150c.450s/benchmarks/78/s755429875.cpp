#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <functional>
#include <queue>
#include <stack>
#include <cmath>
#include <iomanip>
#include <list>
#include <tuple>
#include <bitset>

using namespace std;

inline bool cheak(int x, int y, int xMax, int yMax){ return x >= 0 && y >= 0 && xMax > x && yMax > y; }
inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v; }
template<class T> inline string toString(T x) { ostringstream sout; sout << x; return sout.str(); }
template<class T> inline T sqr(T x) { return x*x; }

typedef pair<int, int> P;
typedef tuple<int, int, int> T;
typedef long long ll;
typedef unsigned long long ull;

#define For(i,a,b)	for(int (i) = (a);i < (b);(i)++)
#define rep(i,n)	For(i,0,n)
#define clr(a)		memset((a), 0 ,sizeof(a))
#define mclr(a)		memset((a), -1 ,sizeof(a))
#define all(a)		(a).begin(),(a).end()
#define sz(a)		(sizeof(a))
#define Fill(a,v)	fill((int*)a,(int*)(a+(sz(a)/sz(*(a)))),v)

const int dx[8] = { 1, 0, -1, 0, 1, 1, -1, -1 }, dy[8] = { 0, -1, 0, 1, -1, 1, -1, 1 };
const int mod = 1000000007;
const int INF = 1e9;

int d[1000001];
int d2[1000001];

int main()
{
	int n;
	Fill(d, INF);
	Fill(d2, INF);
	
	vector<int> v,v2;
	for (int i = 1;; i++){
		int t = i * (i + 1) * (i + 2) / 6;
		if (t > 1e6)break;
		v.push_back(t);
		d[t] = 1;
		if (t % 2){
			d2[t] = 1;
			v2.push_back(t);
		}
	}

	For(i,1, 1e6){
		rep(j, v.size())if(i + v[j] < 1e6){
			d[i + v[j]] = min(d[i + v[j]], d[i] + 1);
		}
		rep(j, v2.size())if (i + v2[j] < 1e6){
			d2[i + v2[j]] = min(d2[i + v2[j]], d2[i] + 1);
		}
	}

	while (cin >> n && n){

		cout << d[n] << " " << d2[n] << endl;

	}

	return 0;
}