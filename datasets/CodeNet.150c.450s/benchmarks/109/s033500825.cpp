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

inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v; }
inline bool cheak(int x, int y, int xMax, int yMax){ return x >= 0 && y >= 0 && xMax > x && yMax > y; }
template<class T> inline string toString(T x) { ostringstream sout; sout << x; return sout.str(); }
template<class T> inline T sqr(T x) { return x*x; }

typedef pair<int, int> P;
typedef tuple<int, int,int> T;
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

int d[100000];

int main()
{

	int n;
	while (cin >> n && n){
		clr(d);
		rep(i, n){
			string S, E;
			cin >> S >> E;

			int s = toInt(S.substr(0, 2)) * 3600 + toInt(S.substr(3, 2)) * 60 + toInt(S.substr(6, 2));
			int e = toInt(E.substr(0, 2)) * 3600 + toInt(E.substr(3, 2)) * 60 + toInt(E.substr(6, 2));

			For(i, s, e){
				d[i]++;
			}
		}

		int ans = 0;
		rep(i, 100000){
			ans = max(d[i], ans);
		}
		cout << ans << endl;
	}

	return 0;
}