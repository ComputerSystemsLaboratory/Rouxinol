#include<iostream>
using namespace std;
int main(){
	int cnt,n,m,dat[110000];
	while(1){
	cin>>n>>m;
	if(n==0 && m==0){
		break;
	}
	for(int i=0;i<n;i++){
		cin>>dat[i];
	}
	int ans=0;
	int cnt=0;
	for(int i=0;i<m;i++){
		ans+=dat[i];
	}
	cnt=ans;
	for(int i=m;i<n;i++){
		cnt+=dat[i]-dat[i-m];
		ans=max(ans,cnt);
	}
	cout<<ans<<endl;
	}
	return 0;
}