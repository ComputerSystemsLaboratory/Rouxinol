#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <cmath>
#include <algorithm>
#include <functional>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);++i)
#define rep1(i,n) for(int i=1;i<=(n);++i)
#define all(c) (c).begin(),(c).end()
#define pb push_back
#define fs first
#define sc second
#define show(x) cout << #x << " = " << x << endl
int main(){
	while(true){
		int H;
		cin>>H;
		if(H==0) break;
		int a[10][5];
		rep(i,H) rep(j,5) cin>>a[H-1-i][j];
		int ans=0;
		while(true){
			bool update=false;
			rep(i,H){
				if(a[i][2]==-1) continue;
				int l=2,r=2;
				while(l>0){
					if(a[i][l-1]==a[i][2]) l--;
					else break;
				}
				while(r<4){
					if(a[i][r+1]==a[i][2]) r++;
					else break;
				}
				if(r-l+1>=3){
					update=true;
					ans+=a[i][2]*(r-l+1);
					for(int j=l;j<=r;j++) a[i][j]=-1;
				}
			}
			if(!update) break;
			rep(i,5){
				vector<int> vc;
				rep(j,H){
					if(a[j][i]!=-1) vc.pb(a[j][i]);
				}
				rep(j,vc.size()) a[j][i]=vc[j];
				for(int j=vc.size();j<H;j++) a[j][i]=-1;
			}
		}
		cout<<ans<<endl;
	}
}