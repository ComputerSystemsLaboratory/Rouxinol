#include <iostream>
#include<algorithm>
#include<string>
#include <cmath>
#include <vector>
#include <map>
#include <cstdio>
#include <iomanip>
#include<set>
#include <numeric>
#include <queue>

#pragma region Macros
#define int long long
#define double long double


constexpr int MOD = 1000000007;
constexpr double PI = 3.14159265358979323846;
const  int INF = 1e12;
const int dx[8] = { 1, 0, -1, 0, 1, -1, -1, 1 };
const int dy[8] = { 0, 1, 0, -1, 1, 1, -1, -1 };
const int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

#define krep(i,k,n) for(int i=(k);i<n+k;i++)
#define Krep(i,k,n) for(int i=(k);i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define rrep(i,n) for(int i=n-1;i>=0;i--)
#define Rrep(i,n) for(int i=n;i>0;i--)
#define REP(i,n) for(int i=1;i<=n;i++)
#define LAST(x) x[x.size()-1]
#define ALL(x) (x).begin(),(x).end()
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x)
#define swap(a,b) (a += b,b = a - b,a -= b)
#define DIVCEIL(a,b) ((a+b-1)/b)
#define SUM1n(n) ((n)*(n+1)/2)
#define SUM1n2(n) (n*(2*n+1)*(n+1))/6
#define SUMkn(k,n) (SUM1n(n)-SUM1n(k-1))
#define PB push_back
#define Fi first
#define Se second 

int intpow(int a, int n) {
	// a^nのint ver
	if (n == 0)
		return 1;
	else {
		rep(i, n - 1)
			a *= a;
		return a;
	}
}
int MODPOW(int a, int n, int mod) {
	// a^n mod
	int ans = 1;
	while (n > 0) {
		if (n & 1)
			ans = ans * a % mod;
		a = a * a % mod;
		n >>= 1;
	}
	return ans;
}
int factorial(int a) {
	if (a == 0)
		return 1;
	else
		return a * factorial(a - 1);
}
int MODFACT(int a, int mod) {
	int ans = 1;
	REP(i, a) {
		ans *= i;
		ans %= MOD;
	}
	return ans;
}
int nPr(int n, int r) {
	int s = n - r + 1;
	int sum = 1;
	for (int i = s; i <= n; i++)
		sum *= i;
	return sum;
}
int MODnPr(int n, int r, int mod) {
	int s = n - r + 1;
	int sum = 1;
	for (int i = s; i <= n; i++) {
		sum *= i;
		sum = sum % MOD;
	}
	return sum;
}
//int nCr(int n, int r)
int nCr2(int n, int r) {
	return factorial(n) / (factorial(r) * factorial(n - r));
}
int GCD(int a, int b)
{
	if (a < b)
		swap(a, b);
	if (b == 0)
		return a;
	if (a % b == 0)
		return b;
	return GCD(b, a % b);
}
int LCM(int a, int b)
{
	return  a * b / GCD(a, b);
}
int divisor_count(int n) {
	//約数の数（だっけ？）
	int ans = 0;
	REP(i, n) {
		if (n % i == 0)
			ans++;
	}
	return ans;
}
int CEIL1(int n) {
	//1桁目切り上げ
	return (n + 9) / 10 * 10;
}
int getdigit(int n) {
	return log10(n) + 1;
}
int digit(int n, int k) {
	//nのk桁目
	rep(i, k - 1)
		n /= 10;
	return n % 10;
}
int digit_sum(int n) {
	int sum = 0, dig;
	while (n) {
		dig = n % 10;
		sum += dig;
		n /= 10;
	}
	return sum;
}
int DIVTIME(int n, int k) {
	//nをkで何回割れるか的な
	int div = 0;
	while (n % k == 0) {
		div++;
		n /= k;
	}
	return div;
}
int binary(int n) {
	//10進数→2進数
	int ans = 0;
	for (int i = 0; n > 0; i++) {
		ans += n % 2 * intpow(10, i);
		n /= 2;
	}
	return ans;
}
int intabs(int n) {
	if (n < 0)
		return -1 * n;
	else
		return n;
}
int Kaibun(int n) {
	int ans = 0;
	int d = getdigit(n);
	REP(i, d)
		ans += digit(n, i) * pow(10, d - i);
	return ans;
}


inline bool is_uru(int y) {
	if (y % 400 == 0)
		return 1;
	if (y % 100 == 0)
		return 0;
	if (y % 4 == 0)
		return 1;
	return 0;
}
void next_date(int& y, int& m, int& d) {
	int day = days[m];
	if (m == 2 && is_uru(y))
		day++;
	d++;
	if (day < d) {
		m++;
		d = 1;
	}
	if (m == 13) {
		y++;
		m = 1;
	}
}
double LOG(int a, int b) {
	return log(b) / log(a);
}
double DISTANCE(int x1, int y1, int x2, int y2) {
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
double clock_angle(int h, int m) {
	h %= 12;
	double mm = 6.0 * m;
	double nn = 30.0 * h + 0.5 * m;
	return std::min(fabs(mm - nn), 360.0 - fabs(nn - mm));
}
inline bool BETWEEN(int x, int min, int max) {
	if (min <= x && x <= max)
		return true;
	else
		return false;
}
inline bool between(int x, int min, int max) {
	if (min < x && x < max)
		return true;
	else
		return false;
}
inline bool is_prime(int x) {
	if (x == 1)
		return false;
	if (x == 2)
		return true;
	if (x % 2 == 0)
		return false;
	double sqrtx = sqrt(x);
	for (int i = 3; i <= sqrtx; i += 2) {
		if (x % i == 0)
			return false;
	}
	return true;
}
inline bool is_sqrt(int n) {
	if (sqrt(n) == (int)sqrt(n))
		return true;
	else
		return false;
}

template<class T>
inline bool chmin(T& a, T b) {
	if (a > b) {
		a = b;
		return true;
	}
	return false;
}
template<class T>
inline bool chmax(T& a, T b) {
	if (a < b) {
		a = b;
		return true;
	}
	return false;
}
using namespace std;
#pragma endregion


typedef vector<int> vint;
typedef vector<vector<int>> vvint;
typedef vector<string> vstring;
typedef map<int, int> mint;
typedef pair<int, int> pint;
using Graph = vector<vint>;
mint m;

const int MAX = 510000;
long long fac[MAX], finv[MAX], inv[MAX];


void COMinit() {
	fac[0] = fac[1] = 1;
	finv[0] = finv[1] = 1;
	inv[1] = 1;
	for (int i = 2; i < MAX; i++) {
		fac[i] = fac[i - 1] * i % MOD;
		inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
		finv[i] = finv[i - 1] * inv[i] % MOD;
	}
}

long long COM(int n, int k) {
	if (n < k) return 0;
	if (n < 0 || k < 0) return 0;
	return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

vector<pint> prime_factorize(int N) {
	vector<pint>  res;
	Krep(i, 2, sqrt(N)) {
		if (N % i != 0)
			continue;
		int ex = 0;
		while (N % i == 0) {
			++ex;
			N /= i;
		}
		res.push_back({ i, ex });
	}
	if (N != 1)
		res.push_back({ N, 1 });
	return res;
}
double median(vint a) {
	int N = a.size();
	if (N % 2 == 1)
		return (double)a[N / 2];
	else
		return (double)(a[N / 2 - 1] + a[N / 2]) / 2;
}
int collatz(int n, int cou) {
	if (m.count(n))
		return m[n] + cou;
	if (n == 1)
		return cou;
	if (n % 2 == 0)
		return collatz(n / 2, cou + 1);
	return collatz(3 * n + 1, cou + 1);
}




signed main() {
	int D;
	cin >> D;

	vint c(26);
	rep(i, 26)
		cin >> c[i];

	vvint s(D, vector<int>(27));
	rep(i, D) {
		rep(j, 26) {
			cin >> s[i][j];
		}
	}

	vint t(D);
	rep(i, D)
		cin >> t[i];


	vint ld(27);
	int ans = 0;
	rep(i, D) {

		ans += s[i][t[i] - 1];
		ld[t[i] - 1] = i+1;

		rep(j, 26) {
			ans -= c[j] * (i+1 - ld[j]);
		}


		cout << ans << endl;
	}


	return 0;
}
