#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <list>
#include <stack>
#include <set>
#include <map>
#include <algorithm>

#define int long long
#define MOD7 1000000007
#define MOD9 1000000009

#define rep(i, n) for (int i = 0; i < (n); i++)
#define REP(i, a, n) for (int i = (a); i <= (n); i++)
#define all(a) (a).begin(), (a).end()

using namespace std;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, -1, 0, 1 };

int nextInt() {int a; cin >> a; return a;}
char nextChar() {char a; cin >> a; return a;}
double nextDouble() {double a; cin >> a; return a;}
string nextString() {string a; cin >> a; return a;}

void inputVector(vector<int> &v, int &n) {rep(i,n){v.push_back(nextInt());}}
void inputVector(vector<double> &v, int &n) {rep(i,n){v.push_back(nextDouble());}}
void inputVector(vector<string> &v, int &n) {rep(i,n){v.push_back(nextString());}}

signed main() {
    int n, m;
    while (cin >> n >> m) {
	if (!n) break;
	vector<int> a, b;
	inputVector(a, n);
	inputVector(b, m);

	int suma = 0;
	int sumb = 0;
	rep(i, n) suma += a[i];
	rep(i, m) sumb += b[i];

	int mina = -1;
	int minb = -1;
	rep(i, n) {
	    rep(j, m) {
		if ((a[i] - b[j]) * 2 != suma - sumb) continue;
		if (mina == -1 || a[i] + b[j] < mina + minb) {
		    mina = a[i];
		    minb = b[j];
		}
	    }
	}
	if (mina == -1) cout << -1 << endl;
	else cout << mina << " " << minb << endl;
    }

    return 0;
}