
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
#include <list>
#include <iomanip>
#include <fstream>

using namespace std;
inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v; }
template<class T> inline string toString(T x) { ostringstream sout; sout << x; return sout.str(); }
template<class T> inline T sqr(T x) { return x*x; }
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

#define rep(i,n)  for(int (i) = 0;(i) < (n);(i)++)
#define clr(a) memset((a), 0 ,sizeof(a))
#define mclr(a) memset((a), -1 ,sizeof(a))
#define all(a)  (a).begin(),(a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sz(a) (sizeof(a))
#define Fill(a,v) fill((int*)a,(int*)(a+(sz(a)/sz(*(a)))),v)
bool cheak(int x, int y, int xMax, int yMax){ return x >= 0 && y >= 0 && xMax > x && yMax > y; }
const int dx[4] = { -1, 0, 1, 0 }, dy[4] = { 0, 1, 0, -1 };
const int mod = 1000000007;
const int INF = 2147483647;

int main()
{
	int n;
	cin >> n;
	rep(_, n){
		string s[2];
		cin >> s[0] >> s[1];
		int m = 0, c = 0, x = 0, i = 0;

		rep(j, 2){
			int t = 1;
			rep(q, s[j].size()){
				if (s[j][q] == 'm'){
					m += t; t = 1;
				}else
				if (s[j][q] == 'c'){
					c += t; t = 1;
				}else
				if (s[j][q] == 'x'){
					x += t; t = 1;
				}else
				if (s[j][q] == 'i'){
					i += t; t = 1;
				}else{
					t = s[j][q] - '0';
				}
			}
		}

		while (c >= 10 || x >= 10 || i >= 10){
			m += c / 10; c -= c / 10 * 10;
			c += x / 10; x -= x / 10 * 10;
			x += i / 10; i -= i / 10 * 10;
		}

		stringstream ans;
		if (m > 1){ ans << m; }
		if (m){ ans << 'm'; }
		if (c > 1){ ans << c; }
		if (c){ ans << 'c'; }
		if (x > 1){ ans << x; }
		if (x){ ans << 'x'; }
		if (i > 1){ ans << i; }
		if (i){ ans << 'i'; }

		cout << ans.str() << endl;
	}

	return 0;
}