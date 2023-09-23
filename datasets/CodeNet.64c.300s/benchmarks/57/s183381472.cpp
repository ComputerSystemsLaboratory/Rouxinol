#include<iostream>
#include<algorithm>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
int c[10][100000];
int k[100000];
bool d[10];
int h,w,v,z;
int main(){
	while(true){
	cin>>h>>w;
	if(!h&&!w)break;
	v=1;
	rep(i,w)k[i]=0;
	rep(i,h){
		d[i]=false;
		rep(j,w){
			cin>>c[i][j];
			k[j]+=c[i][j];
		}
		v*=2;
	}
	int ans=0;
	rep(r,v){
		int cnt=0;
		rep(i,w)cnt+=max(k[i],h-k[i]);
		ans=max(ans,cnt);
		z=1;
		rep(i,h){
			if(!((r+1)%z)){
				rep(j,w){
					k[j]++;
					if(c[i][j]-d[i])k[j]-=2;
				}
				d[i]=1-d[i];
			}
			z*=2;
		}
	}
	cout<<ans<<endl;
	}
	return 0;
}