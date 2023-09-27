#include <bits/stdc++.h>

using namespace std;

#ifdef DEBUG_MODE
	#define DBG(n) n;
#else
	#define DBG(n) ;
#endif
#define REP(i,n) for(ll (i) = (0);(i) < (n);++i)
#define rep(i,s,g) for(ll (i) = (s);(i) < (g);++i)
#define rrep(i,s,g) for(ll (i) = (s);i >= (g);--(i))
#define PB push_back
#define MP make_pair
#define FI first
#define SE second
#define SHOW1d(v,n) {for(int W = 0;W < (n);W++)cerr << v[W] << ' ';cerr << endl << endl;}
#define SHOW2d(v,i,j) {for(int aaa = 0;aaa < i;aaa++){for(int bbb = 0;bbb < j;bbb++)cerr << v[aaa][bbb] << ' ';cerr << endl;}cerr << endl;}
#define ALL(v) v.begin(),v.end()
#define Decimal fixed<<setprecision(20)
#define INF 1000000000
#define MOD 1000000007

typedef long long ll;
typedef pair<ll,ll> P;

int main(){
	int n;
	
	while(cin >> n,n){
		int mp[11][11];
		
		REP(i,n)REP(j,5)cin >> mp[i][j];
		int ans = 0;
		while(1){
			bool flag = false;
			REP(i,n){
				REP(j,5){
					int cou = 0;
					int now = 0;
					for(int k = j;k < 5;k++){
						if(mp[i][k] == -1)break;
						if(k == j){
							now = mp[i][k];
							cou = 1;
						}
						else{
							if(mp[i][k] == now)cou++;
							else break;
						}
					}
					if(cou >= 3){
						flag = true;
						for(int k = 0;k < cou;k++){
							ans += mp[i][j+k];
							mp[i][j+k] = -1;
						}
					}
				}
			}
			
			REP(q,n){
				for(int i = n-1;i > 0;i--){
					REP(j,5){
						if(mp[i][j] == -1){
							mp[i][j] = mp[i-1][j];
							mp[i-1][j] = -1;
						}
					}
				}
			}			
			if(!flag)break;
		}
		cout << ans << endl;
	}
	
	return 0;
}

