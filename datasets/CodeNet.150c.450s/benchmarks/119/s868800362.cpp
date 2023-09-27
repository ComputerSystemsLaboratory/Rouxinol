#include <iostream>

#define REP(i,n) for(int i=0; i<n; i++)
#define debug(x) cerr << #x << " = " << (x) << endl;

using namespace std;

int w, h, map[51][51], diff[9]={-1, 0, 1, 0, -1, 1, 1, -1, -1};

bool check(int j, int k){
	return (j>=0 && j<h && k>=0 && k<w && map[j][k]>0);
}

void dfs(int j, int k){
	REP(i,8){
		if (check(j+diff[i], k+diff[i+1])){
			map[j+diff[i]][k+diff[i+1]] = 0;
			dfs(j+diff[i],k+diff[i+1]);
		}
	}
	return;
}

int main(){
	while(1){
		int ans=0;
		cin >> w >> h;
		if (w==0 && h==0) break;
		REP(j,h){
			REP(k,w) map[j][k] = 0;
		}
		REP(j,h){
			REP(k,w) cin >> map[j][k];
		}
		REP(j,h){
			REP(k,w){
				if (check(j,k)){
					ans++;
					dfs(j,k);
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}

