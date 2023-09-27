#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;
	while(cin>>n){
		if(n==0)break;
		ll a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		int ans = 1e9;
		int t[n];
		sort(a,a+n);
		for(int i=0;i<n;i++){
			t[i]=1e9;
		}
		for(int i=0;i<n-1;i++){
			t[i] = abs(a[i]-a[i+1]);
		}
		sort(t,t+n);
		ans=t[0];
		cout<<ans<<endl;
	}
}
