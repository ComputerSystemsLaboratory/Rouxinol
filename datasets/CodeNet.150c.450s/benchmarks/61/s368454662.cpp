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

int d[10101];

int main()
{
	while(1) {
		int n, a, b, c, x;
		cin >> n >> a >> b >> c >> x;
		if (!n) break;
		rep(i,0,n) cin >> d[i];

		int idx = 0;
		int i;
		for (i = 0; i < 10001; i++) {
			if (x == d[idx]) idx++;
			if (idx == n) break;
			x = (a * x + b) % c;
		}
		if (idx == n) cout << i << endl;
		else cout << -1 << endl;
	}

	return 0;
}