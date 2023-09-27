#include<iostream>
#include<algorithm>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	int n,a,b,c,x,nx;
	while(cin>>n>>a>>b>>c>>x,(((n||a)||b)||c)||x){
		int y[n];
		rep(i,n)cin>>y[i];
		int cnt=0,ans;
		bool check=true;
		if(x==y[cnt]&&cnt<n)cnt++;
		if(cnt>=n){
			check=false;
			ans=0;
		}else{
			loop(i,1,10001){
				nx=(a*x+b)%c;
				if(nx==y[cnt]&&cnt<n)cnt++;
				if(cnt==n){
					check=false;
					ans=i;
					break;
				}
				x=nx;
			}
		}
		if(check)cout<<-1<<endl;
		else cout<<ans<<endl;
	}
	return 0;
}
