#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <sstream>
#include <complex>
#include <fstream>
#include <bitset>
#include <time.h>
#include <tuple>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef complex<double> Point;

#define PI acos(-1.0)
#define EPS 1e-10
const ll INF = 1e12;
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

int n;
int cnt = 0;
ll s[500100];

void merge(int left, int mid, int right) {
	int n1 = mid - left;
	int n2 = right - mid;
	vector<ll> L(n1 + 1), R(n2 + 1);
	for (int i = 0; i < n1; i++)L[i] = s[left + i];
	for (int i = 0; i < n2; i++)R[i] = s[mid + i];
	L[n1] = INF;
	R[n2] = INF;
	int i = 0;
	int j = 0;
	for (int k = left; k < right; k++) {
		cnt++;
		if (L[i] <= R[j]) {
			s[k] = L[i];
			i = i + 1;
		}
		else {
			s[k] = R[j];
			j = j + 1;
		}
	}
}

//[left,right)????????????
void mergeSort(int left, int right) {
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		mergeSort(left, mid);
		mergeSort(mid, right);
		merge(left, mid, right);
	}
}

int main() {
	cin >> n;
	rep(i, n)cin >> s[i];
	mergeSort(0, n);
	rep(i, n) {
		if (i != n - 1)cout << s[i] << " ";
		else cout << s[i] << endl;
	}
	cout << cnt << endl;
}