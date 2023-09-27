#include<bits/stdc++.h>
using namespace std;
const long long INF = 1e7 + 1;
const long long MOD = 1000000007;
const long double PI = 3.1415926;
#define FOR(i,r,n) for(ll i = (ll)(r); i < (ll)(n); i++)
#define RFOR(i,r,n) for(ll i=(ll)(n-1);i>=r;i--)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) RFOR(i,0,n)
#define ALL(x) x.begin(),x.end()
#define RALL(x) x.rbegin(),x.rend()
typedef long long int ll;
typedef vector<ll> vi;
typedef vector < pair<ll, ll > > vp;
typedef vector <string> vs;
typedef vector <char> vc;
typedef list <ll> lst;

ll n, m, k, ans = 0, sum = 0, cnt = 0;
string s;
char c;

/*--------------------template--------------------*/


ll f(string s)
{
	ll ans = 0;
	RREP(i, s.size())
	{
		ll a = 0;
		if (s[i] == 'i') {
			a = 1;
			if (i > 0 && isdigit(static_cast<unsigned char>(s[i - 1]))) {

				a *= s[i - 1] - '0';
			}
		}
		if (s[i] == 'x') {
			a = 10;
			if (i > 0 && isdigit(static_cast<unsigned char>(s[i - 1]))) {
				a *= s[i - 1] - '0';
			}
		}
		if (s[i] == 'c') {
			a = 100;
			if (i > 0 && isdigit(static_cast<unsigned char>(s[i - 1]))) {
				a *= s[i - 1] - '0';
			}
		}
		if (s[i] == 'm') {
			a = 1000;
			if (i > 0 && isdigit(static_cast<unsigned char>(s[i - 1]))) {
				a *= s[i - 1] - '0';
			}
		}
		ans += a;
	}
	return ans;
}

//string fa(ll x)
void fa(ll x)
{
	string s;
	ll a[4];
	a[0] = x / 1000;
	x -= a[0] * 1000;
	a[1] = x / 100;
	x -= a[1] * 100;
	a[2] = x / 10;
	x -= a[2] * 10;
	a[3] = x;

	char t;
	REP(i, 4)
	{
		if (a[i] != 0) {
			if (i == 0) {
				t = 'm';
			}
			if (i == 1) {
				t = 'c';
			}
			if (i == 2) {
				t = 'x';
			}
			if (i == 3) {
				t = 'i';
			}
			if (a[i] != 1) {
				s.push_back(a[i]+'0');
			}
			s.push_back(t);
		}
	}
	cout << s << endl;
}

int main(void)
{
	cin >> n;

	REP(i,n){
		string a, b;
		ll x, y;
		string t;
		cin >> a >> b;
		x = f(a);
		y = f(b);
		fa(x+y);
	}
}