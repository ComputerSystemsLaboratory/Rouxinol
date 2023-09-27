#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef pair<int,P> P1;
typedef pair<P,P> P2;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-7
#define INF 1000000000
#define fi first
#define sc second
#define rep(i,x) for(int i=0;i<x;i++)
#define SORT(x) sort(x.begin(),x.end())
#define ERASE(x) x.erase(unique(x.begin(),x.end()),x.end())
#define POSL(x,v) (lower_bound(x.begin(),x.end(),v)-x.begin())
#define POSU(x,v) (upper_bound(x.begin(),x.end(),v)-x.begin())
int main(){
	while(1){
		int h;
		cin >> h; if(h == 0) return 0;
		vector<int>x[5];
		for(int i=0;i<h;i++){
			for(int j=0;j<5;j++){
				int a; cin >> a; x[j].pb(a);
			}
		}
		rep(i,5) reverse(x[i].begin(),x[i].end());
		int ret = 0;
		while(1){
			bool upd = 0;
			for(int i=0;i<h;i++){
				for(int j=0;j<3;j++){
					if(x[j].size() <= i || x[j+1].size() <= i || x[j+2].size() <= i) continue;
					if(x[j][i] == x[j+1][i] && x[j+1][i] == x[j+2][i]){
					    bool ok = 0;
						if(j+3<5 && x[j+3].size() > i && x[j+3][i] == x[j][i]){
							ret += x[j][i];
							x[j+3][i] = -1;
							ok = 1;
						}
						if(ok && j+4<5 && x[j+4].size() > i && x[j+4][i] == x[j][i]){
							ret += x[j][i];
							x[j+4][i] = -1;
						}
						ret += 3*x[j][i];
						x[j][i] = -1;
						x[j+1][i] = -1;
						x[j+2][i] = -1;
						//ret += 3*x[j][i];
						upd = 1;
						break;
					}
				}
			}
			vector<int>y[5];
			for(int i=0;i<5;i++){
				for(int j=0;j<x[i].size();j++){
					if(x[i][j] != -1) y[i].pb(x[i][j]);
				}
				x[i] = y[i];
			}
			//if(h==5)for(int i=0;i<5;i++) cout << x[i][0] << endl;
			if(!upd) break;
		}
		cout << ret << endl;
	}
}