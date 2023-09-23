#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <stack>
#include <queue>
#include <utility>
#define REP(i,n) for(int i=0;i<(n);i++)
#define ALL(s) (s).begin(),(s).end()
#define rep(i,l,n) for(int i=l;i<n;i++)
#define rer(i,l,n) for(int i=l;i<=n;i++)
#define rrep(i,n,l) for(int i=n-1;i>=l;i--)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define pb(a) push_back(a);
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef vector<int> vi;
//typedef vector<lint> vli;
typedef vector<vi> vvi;
typedef pair<int, int> pii;

ll n, sum = 0;
ll y[110], m[110], d[110];

int main() {
	cin >> n;
	REP(i, n) {
		cin >> y[i] >> m[i] >> d[i];
		sum = 195 * (y[i] - 1) + 5 * ((y[i] - 1) / 3);
		if (y[i] % 3 == 0) {
			sum += 20 * (m[i] - 1);
		}
		else {
			sum += 20 * (m[i] - 1) - (m[i] - 1) / 2;
		}
		sum += d[i] - 1;
		cout << 196470 - sum << endl;
		sum = 0;
	}
}