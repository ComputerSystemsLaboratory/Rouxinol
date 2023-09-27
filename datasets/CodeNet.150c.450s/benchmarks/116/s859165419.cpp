#include<iostream>

using namespace std;

int main(){
	int n,k;
	while(cin>>n>>k && n && k){
		int s[200000];
		s[0]=0;
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			s[i]=s[i-1]+x;
		}
		int ans=s[k];
		for(int i=0;i+k<=n;i++){
			ans=max(ans,s[i+k]-s[i]);
		}
		cout<<ans<<endl;
	}
}