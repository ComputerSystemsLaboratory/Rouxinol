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

int d[6] = {1,10,100,1000,10000,100000};

int calc(int a, int l)
{
	map<int, int> cnt;
	for (int i = l-1; i>=0; i--) {
		cnt[a / d[i]]++;
		//debug(a/d[i]);
		a %= d[i];
	}
	map<int, int> cmax, cmin;
	cmax = cnt; cmin = cnt;

	int b = 0, c = 0;
	for (int i = l-1; i>=0; i--) {
		for (int j = 9; j>=0; j--) {
			if (cmax[j]) {
				b += j * d[i];
				cmax[j]--;
				break;
			}
		}
	}
	for (int i = l-1; i>=0; i--) {
		rep(j,0,10) {
			if (cmin[j]) {
				c += j * d[i];
				cmin[j]--;
				break;
			}
		}
	}
	//printf("b=%d c=%d\n",b,c);

	return b-c;
}

int main()
{
	while(1) {
		int a, l;
		cin >> a >> l;
		if (!a && !l) break;
		Vi u;
		u.pb(a);
		rep(i,0,20) {
			a = calc(a, l);
			auto it = find(all(u), a);
			if (it == u.end()) {
				u.pb(a);
			} 
			else {
				int j = 0;
				while (1) {
					if (u[j] == a) break;
					j++;
				}
				//for(auto x: u) cout << x << " "; cout << endl;
				cout << j << " " << a << " " << i+1-j << endl;
				break;
			}
		}
	}

	return 0;
}