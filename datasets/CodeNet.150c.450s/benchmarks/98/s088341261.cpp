#define _CRT_SECURE_NO_WARNINGS // #pragma warning(disable:4996)
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <functional>
#include <sstream>
#include <cmath>
#include <set>
#include <map>
using namespace std; 

#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define pb push_back
#define mp(a,b) make_pair(a,b)
#define all(a) a.begin(),a.end()
#define len(x) ((int)(x).size())
#define tmax(a,b,c) max((a),max((b),(c)))
#define tmin(a,b,c) min((a),min((b),(c)))
#define debug(x) cerr << #x << " is " << x << endl;

typedef pair<int, int> Pii;
typedef vector<int> Vi;
typedef vector<vector<int> > VVi;
typedef long long ll;
const int inf = 2e9;
const ll ll_inf = 1e17;
const int mod = 1e9 + 7;
const long double eps = 1e-10;

int main()
{
	while(1) {
		int n, m;
		cin >> n >> m;
		if (!n && !m) break;
		map<int, int> a, b;
		int suma = 0, sumb = 0;
		rep(i,0,n) {
			int t; cin >> t;
			a[t]++;
			suma += t;
		}
		rep(i,0,m) {
			int t; cin >> t;
			b[t]++;
			sumb += t;
		}
		if ((suma + sumb)%2) {
			cout << -1 << endl;
			continue;
		} 
		int d = (sumb - suma) / 2;

		bool f = false;
		rep(i,0,101) {
			if (a[i]) {
				if (i+d >= 0 && i+d <= 100 && b[i+d]) {
					cout << i << " " << i+d << endl;
					f = true;
				}
			}
			if (f) break;
		}
		if (!f) cout << -1 << endl;
	}

	return 0;
}