#include <stdio.h>
#include <cctype>
#include <limits.h>
#include <math.h>
#include <complex>
#include <bitset>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cstring>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <iostream>

#define VARIABLE(x) cerr << #x << "=" << x << endl
#define BINARY(x) static_cast<bitset<16> >(x);
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,m,n) for (int i=m;i<(int)(n);i++)
#define if_range(x, y, w, h) if (0<=(int)(x) && (int)(x)<(int)(w) && 0<=(int)(y) && (int)(y)<(int)(h))

const int INF = 1e9;
const double EPS = 1e-8;
const double PI = 3.14159;
int dx[4]={0, 1, 0, -1}, dy[4]={-1, 0, 1, 0};
using namespace std;
typedef long long ll;
//typedef pair<int, int> P;
struct P {
	int x, y, n;
	P(int n, int x, int y):n(n), x(x), y(y){}
	P(){}
};

/** Problem1192 : Tax Rate Changed **/
int main()
{
	int x, y, s;
	while (cin>>x>>y>>s, x||y||s) {
		int ans=0;
		for (int i=1; i<=s; i++) {
			for (int j=1; j<=s; j++) {
				if (i*(100+x)/100 + j*(100+x)/100 == s) {
					ans = max(ans, i*(100+y)/100 + j*(100+y)/100);
				}
			}
		}
		cout << ans << endl;
	}
}