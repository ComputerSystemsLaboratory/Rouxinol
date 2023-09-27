#include <bits/stdc++.h>

using namespace std;

int main(){
	while(true){
		int n,m; cin >> n >> m;
		if(n == 0) break;
		vector<int> nc(n),mc(m);
		pair<int,int> csum(0,0);
		for(int i = 0; i < n; ++i){
			cin >> nc[i];
			csum.first += nc[i];
		}
		for(int i = 0; i < m; ++i){
			cin >> mc[i];
			csum.second += mc[i];
		}
		sort(nc.begin(), nc.end());
		sort(mc.begin(), mc.end());
		pair<int,int> ans(1000000,1000000);
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < m; ++j){
				pair<int,int> temp(nc[i],mc[j]);
				if(csum.first - nc[i] + mc[j] == csum.second - mc[j] + nc[i]\
					&& temp.first + temp.second < ans.first + ans.second){
					ans = temp;
				}
			}
		}
		if(ans == make_pair(1000000,1000000)){
			cout << -1 << endl;
		}
		else{
		cout << ans.first << " " << ans.second << endl;
		}
	}
				
	return 0;
}