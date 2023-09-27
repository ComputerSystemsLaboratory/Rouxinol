#include <bits/stdc++.h>
#define int long long
#define ll long long 
#define rep(i,a,b) for(signed i=a;i<(b);++i)
#define erep(i,a,b) for(signed i=a;i<=(b);++i)
#define per(i,a,b) for(signed i=(a);i>(b);--i)
#define eper(i,a,b) for(signed i=(a);i>=b;--i)
#define fore(i, x, a) for(auto &&x:a) 
#define ITR(i,b,e) for(auto i=(b);i!=(e);++i)
#define pb emplace_back
#define mp make_pair
#define ALL(x) begin(x),end(x)
#define F first
#define S second
#define debug(x)  cout << #x << ": " << (x) << '\n';
const long long INF=1001001001001001001;
const int MOD=(int)1e9 + 7;
const double EPS=1e-9;
using namespace std;
using Pii = pair<int,int>;
using vii = vector<int>;
template<class T>using  PS_queue = priority_queue<T, vector<T>, greater<T> >;
template<class T>using vv = vector<T>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }
template<typename A, size_t N, typename T> void Fill(A (&array)[N], const T &val){fill( (T*)array, (T*)(array+N), val );}
template<class T> ostream& operator<<(ostream &os,const vector<T> &v) {
    ITR(i,begin(v),end(v))os<<*i<<(i==end(v)-1?"":" ");return os;}
template<class T> ostream& operator<<(ostream &os,const vector<vector<T>> &v) {
    ITR(u,begin(v),end(v))ITR(w,begin(*u),end(*u))os<<*w<<(w==end(*u)-1?"\n":" ");return os;}
template<class T> istream& operator>>(istream &is,vector<T> &v) {
    ITR(i,begin(v),end(v)) is>>*i;return is;}
template<class T,class U> istream& operator>>(istream &is, pair<T,U> &p) {
    is>>p.first>>p.second;return is;}
template<class T>T gcd(T a, T b){ return b ? gcd(b, a % b) : a; }
template<class T>T lcm(T a, T b){ return a / gcd(a, b) * b; }
struct edge { int from, to, cost; };
int dy[]={0, 1, -1, 0}; int dx[]={1, 0, 0, -1};
// cout << fixed;
// cout << setprecision(10) << val;

int partition(vector<pair<char, int>> &a, int p, int r) {
	int i = p-1, pivot = r;
	for (int j = p; j < r; j++) {
		if (a[j].S <= a[pivot].S) {
			swap(a[++i], a[j]);
		}
	}
	swap(a[pivot], a[++i]);
	return i;
}

void quickSort(vector<pair<char, int>> &a, int p, int r) {
	if (p < r) {
		int q = partition(a, p, r);
		quickSort(a, p, q-1);
		quickSort(a, q, r);
	}
}

int n;
vv<pair<char, int>> cards, stable_cards;

signed main() {
 cin.tie(0);
 ios::sync_with_stdio(false);
	cin >> n;
	rep(i, 0, n) {
		char c;
		int k;
		cin >> c >> k;
		cards.push_back(make_pair(c, k));
		stable_cards.push_back(make_pair(c, k));
	}

	quickSort(cards, 0, n-1);
	stable_sort(stable_cards.begin(), stable_cards.end(), 
			[](const pair<char, int> &a, const pair<char, int> &b){ return a.S < b.S; });

	bool isStable = true;
	for (int i = 0; i < n; i++) {
		if (stable_cards[i] != cards[i]) {
			isStable = false;
			break;
		}
	}
	cout << (isStable ? "Stable" : "Not stable") << endl;
	for (auto x : cards) {
		cout << x.F << " " << x.S << endl;
	}
  return 0;
}


