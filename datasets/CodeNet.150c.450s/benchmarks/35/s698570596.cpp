#include<iostream>
#include<iomanip>
#include<algorithm>
#include<array>
#include<bitset>
#include<cassert>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<numeric>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define RFOR(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define REP(i,n) for(int i=0;i<(n);i++)
#define RREP(i,n) for(int i=(n)-1;i>=0;i--)
#define ALL(a) (a).begin(),(a).end()
#define dump(o) {cerr<<#o<<" "<<o<<endl;}
#define dumpc(o) {cerr<<#o; for(auto &e:(o))cerr<<" "<<e;cerr<<endl;}
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL
const int MOD = 1e9 + 7;

signed main() {
	for (int n; cin >> n&&n;) {
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		vector<int> M(n);
		for (int i = 0; i < n; i++) {
			M[i] = a[i];
			int temp = a[i];
			for (int j = i + 1; j < n; j++) {
				temp += a[j];
				M[i] = max(M[i], temp);
			}
		}
		cout << *max_element(ALL(M)) << endl;
	}
	return 0;
}