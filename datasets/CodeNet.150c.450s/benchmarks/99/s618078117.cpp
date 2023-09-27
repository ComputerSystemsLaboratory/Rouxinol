#pragma region _head

#include<iostream>
#include<fstream>
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
#include<regex>

void Init() {
	std::cin.tie(0); std::ios::sync_with_stdio(false);
	struct Init_caller { Init_caller() { Init(); } }caller;
}

#pragma region _define

#define int LL
#define f(i,a,b) for(LL i=a;i<b;i++)
#define rep(i,n) for(LL i=0;i<n;i++)
#define rep2(i,j,a,h,w) for(LL i=0;i<h;i++)for(LL j=0;j<w;j++)cin>>a[i][j]
#define f_vI(v,n) f(i,0,n)cin>>v[i]
#define f_v2I(v1,v2,n) f(i,0,n)cin>>v1[i]>>v2[i]
#define f_v3I(v1,v2,v3,n) f(i,0,n)cin>>v1[i]>>v2[i]>>v3[i]
#define f_vO(v,n) f(i,0,n)cout<<v[i]<<endl
#define ei else if
#define all(a) a.begin(),a.end()
#define size(s) ((LL)s.size())
#define F first
#define S second
#define check() cout<<"! ! !"
#define endl "\n"
#define _y() cout<<"Yes"<<endl
#define _Y() cout<<"YES"<<endl
#define _n() cout<<"No"<<endl
#define _N() cout<<"NO"<<endl
#define INT_INF 1<<29
#define LL_INF 1LL<<60
#define MOD (int)pow(10,9)+7

#pragma endregion





#pragma region _using

using namespace std;

using LL = long long;
using st = string;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vd = vector<double>;
using vvd = vector<vd>;
using vvvd = vector<vvd>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<st>;
using vb = vector<bool>;
using vvb = vector<vb>;
using vvvb = vector<vvb>;
using qi = queue<int>;
using qc = queue<char>;
using qs = queue<st>;
using si = stack<int>;
using sc = stack<char>;
using ss = stack<st>;
using pi = pair<int, int>;
using ppi = pair<pi, int>;
using mll = map<int, int>;
using mcl = map<char, int>;
using msb = map<st, bool>;
using vpi = vector<pi>;
using vppi = vector<ppi>;
using qpi = queue<pi>;

#pragma endregion

//4,2,8,6,1,7,3,9の順
int arround_x[] = { -1,0,0,1,-1,-1,1,1 };
int arround_y[] = { 0,1,-1,0,1,-1,1,-1 };



void y_n(bool p) {
	p ? _y() : _n();
}

void Y_N(bool p) {
	p ? _Y() : _N();
}

LL vmax(vi v, LL n) {
	int MAX = 0;
	f(i, 0, n) {
		MAX = max(MAX, v[i]);
	}
	return MAX;
}

LL vmin(vi v, LL n) {
	int MIN = LL_INF;
	f(i, 0, n) {
		MIN = min(MIN, v[i]);
	}
	return MIN;
}

LL gcd(LL a, LL b) {
	if (b == 0) {
		swap(a, b);
	}
	LL r;
	while ((r = a % b) != 0) {
		a = b;
		b = r;
	}
	return b;
}
LL lcm(LL a, LL b) {
	return (a / gcd(a, b) * b);
}

//素数判定
bool is_prime(int n) {
	if (n == 1) {
		return false;
	}
	else {
		for (int i = 2; i*i <= n; i++) {
			if (n % i == 0) {
				return false;
			}
		}
	}
	return true;
}


//素因数分解
void dec_prime(int n) {
	int a = 2;
	while (a*a <= n) {
		if (n % a == 0) {
			cout << a << endl;
			n /= a;
		}
		else {
			a++;
		}
	}
	cout << n << endl;
}

//エラトステネスの篩 （区間[a,b]の篩）
int sieve_prime(LL a,LL b) {
	if (a > b)swap(a, b);
	vb s(b + 1, true);
	int cnt_a=0,cnt_b = 0;
	f(i, 2, b + 1) {
		for (int j = 2; i*j <= b; j++) {
			s[i*j] = false;
		}
	}
	//cout << "2から" << n << "までの素数" << endl;
	f(i, 2, b + 1) {
		if (s[i]) {
			//cout << i << " ";
			if (i < a) {
				cnt_a++;
			}
			cnt_b++;
		}
	}
	return cnt_b - cnt_a;
}

//階乗計算
LL factorial(LL n) {
	LL a = 1, ret = 1;
	while (a < n) {
		a++;
		ret *= a;
		ret %= MOD;
	}
	return ret;
}


#pragma endregion 

vi par;

int root(int x) {
	if (par[x] == x) {
		return x;
	}
	else {
		return par[x] = root(par[x]);
	}
}

void unite(int x, int y) {
	if (root(x) == root(y)) {
		return;
	}
	else {
		par[root(x)] = root(y);
		return;
	}
}

bool same(int x, int y) {
	return root(x) == root(y);
}

struct edge {
	int to;
	int cost;
};

/*****************************************************************************/
signed main() {

	int n;
	cin >> n;
	vs d1(n), d2(n);
	rep(i, n) {
		cin >> d1[i] >> d2[i];
		int ans = 0;
		int a = 0, b = 0, c = 0, d = 0, num = 1;
		rep(j, size(d1[i])) {
			switch (d1[i][j]) {
			case 'm':
				ans += num * 1000;
				num = 1;
				break;
			case 'c':
				ans += num * 100;
				num = 1;
				break;
			case'x':
				ans += num * 10;
				num = 1;
				break;
			case'i':
				ans += num;
				num = 1;
				break;
			default:
				num = d1[i][j] - '0';
			}
		}
		rep(j, size(d2[i])) {
			switch (d2[i][j]) {
			case 'm':
				ans += num * 1000;
				num = 1;
				break;
			case 'c':
				ans += num * 100;
				num = 1;
				break;
			case'x':
				ans += num * 10;
				num = 1;
				break;
			case'i':
				ans += num;
				num = 1;
				break;
			default:
				num = d2[i][j] - '0';
			}
			//cout << ans << endl;
		}
		int e, f, g, h;
		bool f1 = false, f2 = false, f3 = false, f4 = false;
		if (ans >= 1000) {
			e = ans / 1000;
			ans %= 1000;
			f1 = true;
		}
		if (ans >= 100) {
			f = ans / 100;
			ans %= 100;
			f2 = true;
		}
		if (ans >= 10) {
			g = ans / 10;
			ans %= 10;
			f3 = true;
		}
		if (ans > 0) {
			h = ans;
			f4 = true;
		}
		if (f1) {
			if (e != 1)cout << e;
			cout << "m";
		}
		if (f2) {
			if (f != 1)cout << f;
			cout << "c";
		}
		if (f3) {
			if (g != 1)cout << g;
			cout << "x";
		}
		if (f4) {
			if (h != 1)cout << h;
			cout << "i";
		}
		cout << endl;
	}
	return 0;
}
