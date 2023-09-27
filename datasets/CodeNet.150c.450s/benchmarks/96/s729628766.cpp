#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include "bits/stdc++.h"
#define REP(i,a,b) for(int i=a;i<b;++i)
#define rep(i,n) REP(i,0,n)
#define ll long long
#define ull unsigned ll
typedef long double ld;
#define ALL(a) (a).begin(),(a).end()
#define ifnot(a) if(not a)
#define dump(x)  cerr << #x << " = " << (x) << endl
using namespace std;

void reader(int &a) { scanf("%d", &a); }
void reader(double &a) { scanf("%lf", &a); }
void reader(char a[]) { scanf("%s", a); }
void reader(char &a) { scanf(" %c", &a); }
void reader(ll &a) { scanf("%lld", &a); }
void reader(ull &a) { scanf("%llu", &a); }
// void reader(string& a){cin >> a;};
template<class T, class U> void reader(T& t, U& u) { reader(t); reader(u); }
template<class T, class U, class V> void reader(T& t, U& u, V& v) { reader(t); reader(u); reader(v); }

void writer(const int a, char c) { printf("%d", a); putchar(c); }
void writer(const ll a, char c) { printf("%lld", a); putchar(c); }
void writer(const ull a, char c) { printf("%llu", a); putchar(c); }
void writer(const double a, char c) { printf("%.20lf", a); putchar(c); }
void writer(const char a[]) { printf("%s", a); };
void writer(const char a[], char c) { printf("%s", a); putchar(c); };
void writer(const char a, char c) { putchar(a); putchar(c); };
template<class T> void writerLn(T t) { writer(t, '\n'); }
template<class T, class U> void writerLn(T t, U u) { writer(t, ' '); writer(u, '\n'); }
template<class T, class U, class V> void writerLn(T t, U u, V v) { writer(t, ' '); writer(u, ' '); writer(v, '\n'); }
template<class T> void writerArr(T x[], int n) { int i; if (!n) { putchar('\n'); return; }rep(i, n - 1) writer(x[i], ' '); writer(x[n - 1], '\n'); }
template<class T> void writerVec(vector<T> x) { int n = x.size(); int i; if (!n) { putchar('\n'); return; }rep(i, n - 1) writer(x[i], ' '); writer(x[n - 1], '\n'); }

vector<string> split(const string &str, char sep) { vector<string> v; stringstream ss(str); string buffer; while (getline(ss, buffer, sep)) { v.push_back(buffer); }return v; }
// #define int ll
bool test = 1;
int dx[] = { 0,1,0,-1 };
int dy[] = { 1,0,-1,0 };
#define MAX 300000
//.....................
ull mod = (int)1e9 + 7;

signed main(void)
{
	string s[10];
	s[1] = ".,!? ";
	s[2] = "abc";
	s[3] = "def";
	s[4] = "ghi";
	s[5] = "jkl";
	s[6] = "mno";
	s[7] = "pqrs";
	s[8] = "tuv";
	s[9] = "wxyz";
	int t;
	cin >> t;
	rep(i, t) {
		string res;
		string message;
		cin >> message;
		char now;
		rep(i, message.size()) {
			now = message[i];
			if (now == '0') continue;
			int cnt = 0;
			REP(j, i + 1, message.size()) {
				if (message[j] != now) {
					cnt = j - i;
					break;
				}
			}
			i += cnt;
			res += s[now - '0'][(cnt - 1) % s[now - '0'].size()];
		}
		cout << res << endl;
	}
	return 0;
}