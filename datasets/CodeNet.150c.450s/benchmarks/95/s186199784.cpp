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
/* struct P {
	int x, y, n;
	P(int n, int x, int y):n(n), x(x), y(y){}
	P(){}
}; */

/** Problem2582 : Step Aerobics **/
int main()
{
	int N;
	while (cin>>N, N) {
		const int l=1, r=2, n=0;
		string s;
		int old = n;
		
		int ans=0;
		rep(i, N) {
			cin>>s;
			int ne;
			if (old != n) {
				if (s[0]=='l') ne=l;
				else		   ne=r;
				if (old != ne)
					ans++;
				old = n;
			} else {
				if (s[0]=='l') old=l;
				else		   old=r;
			}
		}
		cout << ans << endl;
	}
}