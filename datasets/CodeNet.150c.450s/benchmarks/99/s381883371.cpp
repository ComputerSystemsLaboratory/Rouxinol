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
typedef vector<int> Vi;
typedef vector<vector<int> > VVi;
typedef long long ll;
const int inf = 2e9;
const ll ll_inf = 1e17;
const int mod = 1e9 + 7;
const long double eps = 1e-10;

char c[4] = {'m', 'c', 'x', 'i'};
int d[4] = {1000, 100, 10, 1};

int main()
{
	int n;
	cin >> n;
	rep(i,0,n) {
		string a[2];
		cin >> a[0] >> a[1];
		int b[2] = {};
		rep(i,0,2) {
			rep(j,0,4) {
				rep(k,0,a[i].size()) {
					if (a[i][k] == c[j]) {
						if (k == 0) {
							b[i] += d[j];
							a[i] = a[i].substr(1);
						}
						else {
							int e = a[i][k-1] - '0';
							b[i] += e * d[j];
							a[i] = a[i].substr(2);
						}
					}
				}
			}
		}
		int sum = b[0] + b[1];
		string ans;
		rep(i,0,4) {
			int x = sum / d[i];
			sum %= d[i];
			if (x >= 2) ans += '0'+x;
			if (x) ans += c[i];
		}
		cout << ans << endl;
	}
	
	return 0;
}