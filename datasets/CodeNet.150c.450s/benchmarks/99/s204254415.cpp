#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef complex<double> Point;

#define PI acos(-1.0)
#define EPS 1e-10
const ll INF = 1e16;
const ll MOD = 1e9 + 7;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,N) for(int i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define EQ(a,b) (abs((a)-(b))<EPS)
#define EQV(a,b) ( EQ((a).real(), (b).real()) && EQ((a).imag(), (b).imag()) )
#define fi first
#define se second
#define N_SIZE (1LL << 20)
#define NIL -1

ll sq(ll num) { return num*num; }
ll mod_pow(ll x, ll n) {
	if (n == 0)return 1;
	if (n == 1)return x%MOD;
	ll res = sq(mod_pow(x, n / 2));
	res %= MOD;
	if (n % 2 == 1) {
		res *= x;
		res %= MOD;
	}
	return res;
}
ll mod_add(ll a, ll b) { return (a + b) % MOD; }
ll mod_sub(ll a, ll b) { return (a - b + MOD) % MOD; }
ll mod_mul(ll a, ll b) { return a*b % MOD; }

ll n;

map<char,ll> table;

ll calc(string s){
	ll res = 0;
	ll c = 1;
	rep(i,s.size()){
		if(s[i] >= '2' && s[i] <= '9')c = s[i] - '0';
		else{
			res += c*table[s[i]];
			c = 1;
		}
	}
	return res;
}

string solve(ll num){
	string res = "";
	ll cnt = 0;
	while(num >= 1000){
		num -= 1000;
		cnt++;
	}
	if(cnt >= 2)res += (char)('0'+cnt);
	if(cnt >= 1)res += "m";

	cnt = 0;
	while(num >= 100){
		num -= 100;
		cnt++;
	}
	if(cnt >= 2)res += (char)('0'+cnt);
	if(cnt >= 1)res += "c";

	cnt = 0;
	while(num >= 10){
		num -= 10;
		cnt++;
	}
	if(cnt >= 2)res += (char)('0'+cnt);
	if(cnt >= 1)res += "x";

	cnt = 0;
	while(num >= 1){
		num -= 1;
		cnt++;
	}
	if(cnt >= 2)res += (char)('0'+cnt);
	if(cnt >= 1)res += "i";
	return res;
}

int main(){
	cin >> n;
	table['m'] = 1000;
	table['c'] = 100;
	table['x'] = 10;
	table['i'] = 1;
	while(n--){
		string s,t;
		cin >> s >> t;
		ll num = calc(s)+calc(t);
		// cout << "!" << num << endl;
		cout << solve(num) << endl;
	}
}
