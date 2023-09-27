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
#include <stack>
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
typedef map<int, int> Mii;
typedef vector<int> Vi;
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
		Mii p;
		int len = 0;
		rep(i,0,n) {
			int a, b;
			cin >> a >> b;
			p[b] += a;
			len += a;
		}
		len -= m;
		int sum = 0;
		rep(i,0,11) {
			if (p[i]) {
				if (len > p[i]) {
					len -= p[i];
					sum += i * p[i];
					p[i] = 0;
				}
				else {
					sum += i * len;
					len = 0;
				}
			}
			if (!len) break;
		}
		if (sum > 0) cout << sum << endl;
		else cout << 0 << endl;
	}

	return 0;
}