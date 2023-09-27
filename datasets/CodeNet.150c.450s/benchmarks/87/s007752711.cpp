#include <bits/stdc++.h>
using namespace std;

#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
#define DEBUG false
 
typedef long long ll;
typedef pair<int, int> ii;

int main() {
	
	int h;
	while(cin >> h , h){
		
		vector<vector<int>> mp(h, vector<int>(5));
		
		for(int i = h-1; i >= 0; i--) rep(j, 5) cin >> mp[i][j];
		
		int ans = 0;
		bool f = true;
		while(f){
			f = false;
			rep(i, h){
				int cnt = 1;
				REP(j, 1, 5){
					if(mp[i][j] == mp[i][j - 1] && mp[i][j] > 0) cnt++;
					else{
						if(cnt >= 3){
							rep(k, cnt){
								ans += mp[i][j-1-k];
								mp[i][j-1-k] = -1;
								f = true;
							}
						}
						cnt = 1;
					}
				}
				if(cnt >= 3){
					rep(k, cnt){
						ans += mp[i][4-k];
						mp[i][4-k] = -1;
						f = true;
					}
				}
				
			}
			
			rep(i, h){
				rep(j, 5){
					if(mp[i][j] == -1){
						int tmp = 0;
						for(int k = 1; i + k < h; k++){
							if(mp[i+k][j] != -1){
								tmp = mp[i+k][j];
								mp[i+k][j] = -1;
								break;
							}
							mp[i+k][j] = -1;
						}
						
						mp[i][j] = tmp;
					}
				}
			}
		}
	
		cout << ans << endl;
		
	}
	
	
	return 0;
}