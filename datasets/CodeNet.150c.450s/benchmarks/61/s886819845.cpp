#pragma region _head

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<map>
#include<set>
#include<iomanip>
#include<queue>
#include<stack>
#include<numeric>
#include<utility>

#pragma region _define

#define int LL
#define f(i,a,b) for(LL i=a;i<b;i++)
#define rep(i,n) for(LL i=0;i<n;i++)
#define f_vI(v,n) f(i,0,n)cin>>v[i]
#define f_v2I(v1,v2,n) f(i,0,n)cin>>v1[i]>>v2[i]
#define f_v3I(v1,v2,v3,n) f(i,0,n)cin>>v1[i]>>v2[i]>>v3[i]
#define f_vO(v,n,option) f(i,0,n)cout<<v[i]<<option;
#define all(a) a.begin(),a.end()
#define size(s) ((int)s.size())
#define check() cout<<"! ! !"
#define endl "\n"
#define _y() cout<<"Yes"<<endl
#define _Y() cout<<"YES"<<endl
#define _n() cout<<"No"<<endl
#define _N() cout<<"NO"<<endl
#define INT_INF 1<<29
#define LL_INF 1LL<<60
#define MOD 10000007

#pragma endregion

#pragma region _using

using namespace std;

using LL = long long;
using st = string;
using vi = vector<LL>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vc = vector<char>;
using vs = vector<st>;
using vb = vector<bool>;
using vvb = vector<vb>;
using vvvb = vector<vvb>;
using qi = queue<int>;
using qc = queue<char>;
using qs = queue<st>;
using si = stack<LL>;
using sc = stack<char>;
using ss = stack<st>;
using pi = pair<LL, LL>;
using mll = map<LL, LL>;
using vpi = vector<pi>;

#pragma endregion


//素数判定
bool is_prime(int n) {
	for (int i = 2; i*i <= n; i++) {
		if (n%i == 0) {
			return false;
		}
	}
	return true;
}

void y_n(bool p) {
	if (p)_y();
	else _n();
}

void Y_N(bool p) {
	if (p) _Y();
	else _N();
}

LL gcd(LL a, LL b) {
	LL r;
	while ((r = a % b) != 0) {
		a = b;
		b = r;
	}
	return b;
}
LL lcm(LL a, LL b) {
	return (a / gcd(a, b)*b);
}

//階乗計算
LL factorial(LL n) {
	LL a = 1, ret = 1;
	while (a < n) {
		a++;
		ret *= a;
		//ret %= 1000000007;
	}
	return ret;
}

#pragma endregion


/************************************************************************/
signed main(void) {
	cin.tie(0); ios::sync_with_stdio(false);

	while (1) {
		int n, a, b, c, x;
		cin >> n >> a >> b >> c >> x;
		if (n == 0 && a == 0 && b == 0 && c == 0 && x == 0) {
			break;
		}
		vi y(n);
		f_vI(y, n);
		int ans = 0;
		int i = 0;
		while (ans < 10001) {
			if (y[i] == x) {
				i++;
			}
			if (i >= n)break;
			x = ((a*x + b) % c);
			ans++;
		}
		if (ans > 10000) {
			cout << -1;
		}
		else {
			cout << ans;
		}
		cout << endl;
	}
	
	return 0;
}
