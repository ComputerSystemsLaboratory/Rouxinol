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
	int n;
	cin >> n;
	rep(i,0,n) {
		string s;
		cin >> s;
		set<string> ans;
		rep(i,0,s.size()) {
			string a, ar, b, br, c, d, e, f;
			a = s.substr(0,i);
			ar = a;
			reverse(all(ar));
			b = s.substr(i);
			br = b;
			reverse(all(br));

			ans.insert(a + b);
			ans.insert(a + br);
			ans.insert(ar + b);
			ans.insert(ar + br);
			ans.insert(b + a);
			ans.insert(br + a);
			ans.insert(b + ar);
			ans.insert(br + ar);
		}
		cout << ans.size() << endl;
	}

	return 0;
}