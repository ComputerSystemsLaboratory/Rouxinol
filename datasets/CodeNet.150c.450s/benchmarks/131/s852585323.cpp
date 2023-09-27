#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

#define rep(i,n) for(int i=0; i<(n); i++)
#define repc(i,s,e) for(int i=(s); i<(e); i++)
#define pb(n) push_back((n))
#define mp(n,m) make_pair((n),(m))
#define all(r) r.begin(),r.end()
#define fi first
#define se second

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<ll> vl;
typedef vector<vl> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;




const int INF = 1000000;
const int mod = 1e9 + 7;



int main() {
	int n, l;
	while (cin >> n >> l && !(n==0 &&l==0)) {
		vi v(1e7, -1);
		v[n] = 0;
		for (int i = 1; i <= 100; i++) {
			stringstream ss;
			ss << setw(l) << setfill('0') << n;
			string s, t;
			s = ss.str();
			sort(all(s));
			t = s;
			reverse(all(t));
			n = atoi(t.c_str()) - atoi(s.c_str());
			if (v[n] >= 0) {
				cout << v[n] << " " << n << " " << i - v[n] << endl;
				break;
			}
			v[n] = i;
		}
	}
}