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

int main()
{
	while(1) {
		int h, w;
		cin >> h >> w;
		if (!h && !w) break;
		int q = h*h + w*w;
		int ans = inf;
		Pii pos = mp(inf, inf);
		rep(i,1,151) {
			rep(j,i+1,152) {
				int x = i*i + j*j;
				if (x < q) continue;
				if (x == q && i <= h) continue;
				
				if (x < ans) {
					ans = x;
					pos = mp(i,j);
				}
				else if (x == ans && i < pos.first) {
					pos = mp(i,j);
				}
			}
		}
		cout << pos.first << " " << pos.second << endl;
	}

	return 0;
}