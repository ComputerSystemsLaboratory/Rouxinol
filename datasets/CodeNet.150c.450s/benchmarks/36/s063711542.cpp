//0014
#include <bits/stdc++.h>
using namespace std;

int main(){
	int d,i,ans,d_di;
	while(cin>>d){
		ans = 0;
		for(i = d;i < 600;i += d){
			ans += i*i*d;
		}
		cout<<ans<<endl;
	}
	return 0;
}