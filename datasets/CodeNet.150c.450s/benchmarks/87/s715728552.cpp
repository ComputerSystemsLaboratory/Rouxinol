#include "bits/stdc++.h"
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

void see(vector<vector<int>> &a){
	rep(i,a.size()){
		rep(j,5) cout << a[i][j] << " ";
		cout << endl;
	}
	cout << endl;
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	while(true){
		int h;
		cin >> h;
		if(h == 0) break;
		vector<vector<int>> a(h, vector<int>(5, 0));
		rep(i,h)rep(j,5) cin >> a[i][j];
		bool changed = true;
		int ans = 0;
		while(changed){
			//see(a);
			changed = false;
			rep(i,h){
				vector<bool> used(5, false);
				rep(j,3){
					if(a[i][j] == 0) continue;
					if(a[i][j] == a[i][j+1] && a[i][j+1] == a[i][j+2]){
						used[j] = true;
						used[j+1] = true;
						used[j+2] = true;
					}
				}
				rep(j,5){
					if(used[j]){
						ans += a[i][j];
						a[i][j] = 0;
						changed = true;
					}
				}
			}
			rep(j,5){
				for(int i = h-1; i > 0; i--){
					if(a[i][j] == 0){
						int cur = i-1;
						while(cur > 0 && a[cur][j] == 0) cur--;
						a[i][j] = a[cur][j];
						a[cur][j] = 0;
					}
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
