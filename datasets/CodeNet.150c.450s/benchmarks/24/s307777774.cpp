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
typedef pair<int, int> P;

/* struct P {
	int x, y, n;
	P(int n, int x, int y):n(n), x(x), y(y){}
	P(){}
}; */


/** Problem2019 : Princess's Marriage **/
int main()
{
	int N, M;
	while (cin>>N>>M, N) {
		vector<P> a(N);
		int sum=0;
		rep(i, N) {
			cin>>a[i].second>>a[i].first;
			sum+=a[i].first*a[i].second;
		}
		
		sort(a.begin(), a.end(), greater<P>());
		
		rep(i, N) {
			if (a[i].second<=M) {
				M-=a[i].second;
				sum -= a[i].first*a[i].second;
			} else {
				sum -= a[i].first*M;
				M=0;
			}
			if (M==0) break;
		}
		
		cout << sum << endl;
	}
}