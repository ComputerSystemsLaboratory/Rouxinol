#include<iostream>
#include<vector>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define pb push_back
using namespace std;

int main(){
	int n,m,a,b;
	while(cin>>n>>m,n||m){
		int a[n],b[m],comp=10000,ans[2];
		bool check=false;
		rep(i,n)cin>>a[i];
		rep(i,m)cin>>b[i];
		rep(i,n){
			rep(j,m){
				int sum[2]={0,0};
				rep(k,n)sum[0]+=(k==i)?b[j]:a[k];
				rep(k,m)sum[1]+=(k==j)?a[i]:b[k];
				if(sum[0]==sum[1] && comp>(a[i]+b[j])){
					ans[0]=a[i];
					ans[1]=b[j];
					comp=a[i]+b[j];
					check=true;
				}
			}
		}
		if(check){
			cout<<ans[0]<<" "<<ans[1]<<endl;
		}else cout<<"-1"<<endl;
	}
	return 0;
}