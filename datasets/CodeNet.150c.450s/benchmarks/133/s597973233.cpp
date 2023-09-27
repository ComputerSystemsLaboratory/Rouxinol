#include <iostream>
#include <iomanip>
#include <utility>
#include <cmath>
#include <random>
#include <vector>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

#define rep(i,n) for(int i = 0; i<n; ++i)
#define REP(i,n) for(int i = 1; i<=n; ++i)
#define all(x) begin(x),end(x)
#define show(obj) {for(auto x:obj)cout<<x<<' ';cout<<endl;}
#define line "----------"
typedef long long ll;
typedef pair<int,int> P;
const int inf = 1001001000;
const ll INF = 1LL<<60;
const ll MOD = 1e9 + 7;

int main(){
	int D; cin>>D;
	vector<int> cs(26);
	vector<vector<int>> s(D,vector<int> (26));
	vector<int> sche(D);
	vector<int> last(26,-1);
	rep(i,26)cin>>cs[i];
	rep(i,D)rep(j,26)cin>>s[i][j];
	rep(i,D)cin>>sche[i];
	ll ans = 0;
	rep(i,D){
		int ch = sche[i]-1;
		ans += s[i][ch];
		last[ch] = i;
		rep(k,26){
			ans -= cs[k] * (i - last[k]);
		}
		cout<<ans<<endl;
	}
	return 0;
}