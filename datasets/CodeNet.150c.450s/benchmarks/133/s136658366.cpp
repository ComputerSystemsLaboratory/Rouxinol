#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(int)(n); i++)

using namespace std;
using LL = long long;
using P = pair<int,int>;
const int kind=26;

int main(){
	int D;
	cin >> D;
	vector<int> c(kind);
	rep(i,kind) cin >> c[i];
	int c_sum=0;
	rep(i,kind) c_sum+=c[i];
	vector<vector<int>> s(D,vector<int>(kind));
	rep(i,D){
		rep(j,kind) cin >> s[i][j];
	}
	vector<int> t(D);
	rep(i,D) cin >> t[i];
	rep(i,D) t[i]--;
	int ans=0, day=1, dec=0;
	vector<int> last(kind);
	for(int d=1; d<=D; d++){
		int k=t[d-1];
		ans+=s[d-1][k];
		dec+=c_sum;
		ans-=dec;
		ans+=c[k]*(d-last[k]);
		dec-=c[k]*(d-last[k]);
		last[k]=d;
		cout << ans << endl;
	}

	return 0;
}