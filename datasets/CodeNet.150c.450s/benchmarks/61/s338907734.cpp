#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

#define rep(i,n) for(int i=0; i<(n); i++)
#define repc(i,s,e) for(int i=(s); i<(e); i++)
#define pb(n) push_back((n))
#define mp(n,m) make_pair((n),(m))
#define all(r) r.begin(),r.end()
#define fi first
#define se second

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<ll> vl;
typedef vector<vl> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;




const int INF = 1000000;
const int mod = 1e9 + 7;



int a, b, c, x;

int nextX() {
	return (a * x + b) % c;
}


int main(){
	int n;
	while (cin >> n >> a >> b >> c >> x && n || a || b || c || x) {
		vi v(n, 0);
		rep(i, n) cin >> v[i];
		int flame = 0, idx = 0;
		bool f = false;
		//cout << a << " " << x << " " << b << " " << c << endl;
		for (flame = 0; flame <= 10000; flame++) {
			//cout << x << endl;
			if (x == v[idx]) idx++;
			if (idx == n) {
				f = true;
				break;
			}
			x = nextX();
		}
		cout << (f ? flame : -1) << endl;
	}
}