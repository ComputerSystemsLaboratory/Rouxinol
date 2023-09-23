#include<bits/stdc++.h>
using namespace std;
signed main(void){
	ios::sync_with_stdio(false);
	int d,ans;
	while(cin>>d){
		ans=0;
		for(int i=0;i<600;i+=d)
			ans+=i*i*d;
		cout<<ans<<endl;
	}
}