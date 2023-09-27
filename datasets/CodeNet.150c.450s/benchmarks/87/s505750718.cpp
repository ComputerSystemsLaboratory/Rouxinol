#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
#define loop(i,a,b) for(int i=(a);i<int(b);i++)
#define rep(i,b) loop(i,0,b)
#define all(c) c.begin(), c.end()
typedef vector<int> vi;
typedef vector<vi> vvi;
int main(){
	int n;
	while(cin>>n && n){
		vvi g(5,vi(n));
		rep(i,n)rep(j,5)cin>>g[j][i];
		rep(i,5)reverse(all(g[i]));
		
		int ans=0;
		while(1){
			int t=0;
			rep(i,5){
				rep(j,g[i].size()){
					int ni=i;
					if(g[i][j]==-1) continue;
					while(ni < 5 && j < g[ni].size() && g[ni][j]==g[i][j]){
						ni++;
					}
					if(ni-i<3) continue;
					for(int ii=i;ii<ni;ii++){
						t+=g[ii][j];
						g[ii][j] = -1;
					}
				}
			}
			if(t==0)break;
			// rep(i,5){
			// 	rep(j,g[i].size()){
			// 		cout << g[i][j] << " ";
			// 	}
			// 	cout<<endl;
			// }
			rep(i,5)g[i].erase(remove(all(g[i]),-1),g[i].end());
			ans+=t;
		}
		cout << ans << endl;
	}
}