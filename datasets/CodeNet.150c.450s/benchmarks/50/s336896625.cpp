#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while(cin>>n,n){
		int ans=0;
		n=1000-n;
		ans+=n/500;n%=500;
		ans+=n/100;n%=100;
		ans+=n/50;n%=50;
		ans+=n/10;n%=10;
		ans+=n/5;n%=5;
		ans+=n;
		cout<<ans<<endl;
	}
}