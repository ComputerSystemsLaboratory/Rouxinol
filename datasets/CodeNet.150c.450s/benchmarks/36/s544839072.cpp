#include <bits/stdc++.h>
using namespace std;
int main() {
	int d;
	while(cin>>d){
		int ans;
		int temp=d;
		for(ans=0;d<600;d=d+temp){
			ans+=temp*pow(d,2);
		}
		cout<<ans<<endl;
	}
	
	
	return 0;
}