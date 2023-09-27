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
	int m;
	cin >> m;
	rep(loop, m) {
		set<string> s;
		string source_s;
		cin >> source_s;
		int n = source_s.size();
		REP(i, 1, n) {
			string str[2];
			str[0] = source_s.substr(0, i);
			str[1] = source_s.substr(i);
			rep(j, 4) {
				if (j / 2) reverse(ALL(str[0]));
				if (j % 2) reverse(ALL(str[1]));
				s.insert(str[0] + str[1]);
				s.insert(str[1] + str[0]);
				if (j / 2) reverse(ALL(str[0]));
				if (j % 2) reverse(ALL(str[1]));
			}
		}

		cout << s.size() << endl;
		/*
		auto itr = s.begin();
		for (; itr != s.end(); itr++) {
			cout << *itr << endl;
		}*/
	}
	return 0;
}