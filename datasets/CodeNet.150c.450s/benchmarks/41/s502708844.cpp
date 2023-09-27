#include<bits/stdc++.h>
using namespace std;
const int64_t INF = 1e16;
int main() {
	
	int n,e;
	cin >> n >> e;
	vector<vector<pair<int,int>>> g(n);
	vector<vector<int64_t>> dp(n,vector<int64_t>(n,INF));
	for(int i=0; i<e; i++){
		int s,t,d;
		cin >> s >> t >> d;
		dp.at(s).at(t) = d;
	}
	for(int i=0; i<n; i++) dp.at(i).at(i) = 0;
	for(int k=0; k<n; k++){
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				dp.at(i).at(j) = min(dp.at(i).at(j), dp.at(i).at(k)+dp.at(k).at(j));
			}
		}
	}
	bool flg=1;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==j && dp.at(i).at(j)<0) flg=0;
		}
	}
	if(flg){
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(dp.at(i).at(j)<1e10) cout << dp.at(i).at(j) << (j!=n-1?" ":"");
				else cout << "INF" << (j!=n-1?" ":"");
			}
			cout << endl;
		}
	}
	else cout << "NEGATIVE CYCLE" << endl;
}
