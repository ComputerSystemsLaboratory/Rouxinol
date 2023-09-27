#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<stack>
#include<queue>
#include<sstream>
#include<string>
#include<set>
#include<array>
#include<cassert>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i);

using namespace std;

int main(){
	
	int n;
	cin >> n;
	vector<vector<int>> ans(n,vector<int>(n,0));

	rep(i,n){
		int u,k;
		cin >> u >> k;	
		u--;
		rep(j,k){
			int v;
			cin >> v;
			v--;
			ans[u][v]=1;
		}
	}

	rep(i,n){
		rep(j,n-1){
			cout << ans[i][j] << " ";	
		}
		cout << ans[i][n-1] << endl;
	}

	return 0;
}