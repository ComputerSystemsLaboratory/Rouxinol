#include<iostream>
using namespace std;	

int mini,ans,n,R[200000];

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>R[i];
	}
	ans=R[1]-R[0];
	mini=R[0];
	for(int i=1;i<n;i++){
		mini=min(mini,R[i-1]);
		ans=max(ans,R[i]-mini);
	}
	cout<<ans<<endl;
	return 0;
}