//#define MYDEBUG
#include <bits/stdc++.h>
using namespace std;

#ifdef MYDEBUG
#define dbp(x) cout<<#x<<": "<<x<<endl
#define dbp2(x,y) cout<<#x<<","<<#y<<": "<<x<<","<<y<<endl
#define dbp3(x,y,z) cout<<#x<<","<<#y<<","<<#z<<": "<<x<<","<<y<<","<<z<<endl
#define dbp4(w,x,y,z) cout<<#w<<","<<#x<<","<<#y<<","<<#z<<": "<<w<<","<<x<<","<<y<<","<<z<<endl
#else
#define dbp(x)
#define dbp2(x,y)
#define dbp3(x,y,z)
#endif
#define ll long long
#define ull unsigned long long
#define eps 1e-14
#define all(x) x.begin(), x.end()
#define rep(i, from, to) for(int i=from; i<to; ++i)

template<typename T>
ostream& operator<<(ostream& out, const vector<T>& v) {
	out << "[";
	size_t last = v.size() - 1;
	for (size_t i = 0; i < v.size(); ++i) {
		out << v[i];
		if (i != last)
			out << ",";
	}
	out << "]";
	return out;
}

typedef struct state state;
const int maxn = 110;
int s[maxn + maxn];

int sum1(int n) {
	int x = 0;
	for (int i = 0; i < n; ++i) {
		x += s[i];
	}
	return x;
}
int sum2(int n, int m) {
	int x = 0;
	for (int i = n; i < n + m; ++i) {
		x += s[i];
	}
	return x;
}

void solve() {
	int n, m;
	while (cin >> n >> m, (n || m)) { //n||m :
		int a = 0, b = 0;
		for (int i = 0; i < n + m; i++) {
			cin >> s[i];
		}
		a = 100000000;
		b = 100000000;
		bool hasAnswer = false;
		for (int i = 0; i < n; i++) {
			for (int j = n; j < n + m; ++j) {
				swap(s[i], s[j]);
				//テ」ツδ?」ツつァテ」ツδε」ツつッ
				int s1 = sum1(n);
				int s2 = sum2(n, m);
				if (s1 == s2) {
					hasAnswer = true;
					//テ」ツ??」ツ?セテァツ卍コティツヲツ凝」ツ?療」ツ?淌ァツュツ氾」ツ?暗」ツ?ッi,j
					//a,-i, b<-j
					//a+b>i+j
					if (a + b > s[i] + s[j]) {
						a = s[i];
						b = s[j];
					}
				}
				swap(s[i], s[j]);
			}
		}
		if (hasAnswer) {
			swap(a, b);
			cout << a << " " << b << endl;
		} else {
			cout << -1 << endl;
		}
	}
}

int main() {
	solve();
	return 0;
}