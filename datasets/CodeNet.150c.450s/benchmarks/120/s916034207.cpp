#include<iostream>
#include<algorithm>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
int c[10][100000];
int k[100000];
bool d[10];
int w,h,v;
void REC(int q){
	rep(i,h)d[i]=q%2,q/=2;
	return;
}
int main(){
	while(true){
	cin>>h>>w;
	if(!h&&!w)break;
	v=1;
	rep(i,w)k[i]=0;
	rep(i,h){
		rep(j,w){
			cin>>c[i][j];
			k[j]+=c[i][j];
		}
		v*=2;
	}
	int ans=0;
	rep(i,v){
		REC(i);
		rep(j,h)if(d[j])rep(r,w){k[r]++;if(c[j][r])k[r]-=2;}
		int cnt=0;
		rep(j,w)cnt+=max(k[j],h-k[j]);
		ans=max(cnt,ans);
		rep(j,h)if(d[j])rep(r,w){k[r]--;if(c[j][r])k[r]+=2;}
	}
	cout<<ans<<endl;
	}
	return 0;
}