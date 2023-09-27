#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <cmath>
#include <complex>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cassert>
#include <iomanip>
using namespace std;

#define Rep(b, e, i) for(int i = b; i <= e; i++)
#define Repr(e, b, i) for(int i = e; i >= b; i--)
#define rep(n, i) Rep(0, n-1, i)
#define repr(n, i) Repr(n-1, 0, i)
#define all(v) (v).begin(), (v).end()
#define pb(v) push_back(v)
#define uniq(v) (v).erase(unique(all(v)),(v).end())
#define bitcnt(x) __builtin_popcount(x)
#define fst first
#define snd second
#define Pqaz(T) priority_queue<T,vector<T>,greater<T>>
#define Pqza(T) priority_queue<T>
#define put(x) cout << x;
#define putsp(x) cout << x << ' ';
#define putln(x) cout << x << endl;
#define ENJYU std::ios::sync_with_stdio(false);std::cin.tie(0);

typedef long long ll;
typedef pair<ll, ll> llP;
typedef pair<int, int> intP;
typedef complex<double> comp;
typedef vector <int> vec;
typedef vector <ll> vecll;
typedef vector <double> vecd;
typedef vector <vec> mat;
typedef vector <vecll> matll;
typedef vector <vecd> matd;

//vector の中身を出力
template <class T>ostream &operator<<(ostream &o,const vector<T>&v)
{o<<"{";for(int i=0;i<(int)v.size();i++)o<<(i>0?", ":"")<<v[i];o<<"}";return o;}

const int MAX = 100010;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = 1<<29;
const ll INFL = 1e18;
const int MOD = 1000000007;

int dx4[4]={1,0,-1,0};
int dy4[4]={0,1,0,-1};
int dx8[8]={1,0,-1,1,-1,1,0,-1};
int dy8[8]={1,1,1,0,0,-1,-1,-1};

//************************************************************************//

//N以下の素数列挙

vector <int> enum_prime(int N){
	N = sqrt(N+1);
	bool prime[N];
	memset(prime, true, sizeof(prime));
	prime[0] = prime[1] = false;

	for (int i = 2; i < N; i++)
	{
		if (!prime[i]) continue;
		for (int j = 2; i * j < N; j++)
		{
			prime[i*j] = false;
		}
	}

	vector <int> ps;
	rep(N, i)
	{
		if (prime[i]) ps.pb(i);
	}

	return ps;
}

bool isprime(int x)
{
	if (x == 1) return false;
	for (int i = 2; i * i <= x; i++)
	{
		if (x % i) continue;
		return false;
	}
	return true;
}

//************************************************************************//


void solve(void){
	int N;
	cin >> N;

	vec ps = enum_prime(N);

	cout << N << ":";

	if (isprime(N))
	{
		cout << ' ' << N << endl;
		return;
	}

	//cout << ps << endl;

	for (int p : ps)
	{
		if (N == 1)
		{
			break;
		}

		while(N % p == 0 && N != 1)
		{
			cout << ' ' << p;
			N /= p;
		}
	}

	if (isprime(N))
	{
		cout << ' ' << N;
	}

	cout << endl;

}

int main(void){
	solve();
	//cout << "yui(*-v・)yui" << endl;
	return 0;
}

