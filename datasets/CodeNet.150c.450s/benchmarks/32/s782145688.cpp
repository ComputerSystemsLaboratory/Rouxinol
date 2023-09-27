//inlclude before define 
#define _USE_MATH_DEFINES

//include
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<type_traits>
#include<numeric>
#include<deque>
#include<iomanip>
#include<set>
#include<unordered_set>
#include<tuple>
#include<map>
#include<memory>

using namespace std;

//typedef
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<char> VC;
typedef vector<double> VD;
typedef pair<int, int> P1;
typedef long long int ll;

//number
#define INF 1e9
#define NUM 1000000007

//itr
#define all(x) begin(x),end(x)

//repeat
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,a,b) for(int i=int(a);i<int(b);i++)

//max,min
#define chmin(a,b) a=min((a),(b))
#define chmax(a,b) a=max((a),(b))

//function

/*ll gcd(ll a, ll b) {
	if (b == 0) return a;
	else return gcd(b, a%b);
}*/

/*ll lcm(ll a,ll b) {
	ll g = gcd(a, b);
	retur5n a * (b / g);
}*/

int dig(int a) {
	int sum = 0;
	while (a) {
		sum += a % 10;
		a /= 10;
	}
	return sum;
}

//grid template
int x[] = { -1, 0, 1, 0 };
int y[] = { 0,-1,0,1 };
int xx[] = { -1,-1,1,1 };
int yy[] = { 1,-1,1,-1 };

int main() {
	int m, nmin, nmax;
	while (true) {
		cin >> m >> nmin >> nmax;
		if (m == 0 && nmax == 0 && nmin == 0) {
			return 0;
		}

		VI p(m);
		rep(i, m) cin >> p[i];

		int ans = 0, maxv = -1;
		for (int i = nmin; i <= nmax; i++) {
			int div = p[i - 1] - p[i];
			if (max(div, maxv) == div || div==maxv) {
				//cout << div << " " << i << endl;
				maxv = div;
				ans = i;
			}
		}
		cout << ans << endl;

	}
	return 0;
}
