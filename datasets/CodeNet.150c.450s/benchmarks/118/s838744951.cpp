#include <iostream>
#include <algorithm>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
	int n; cin>>n;
	rep(h,n){
		int y,m,d; cin>>y>>m>>d;
		long ans=0;
		if(y%3==0){
			ans+=(10-m)*20+21-d;
		}else{
			if(m%2==0){
				ans+=(10-m)/2*39+(20-d);
			}else{
				ans+=(10-m)/2*39+(40-d);
			}
			if(y%3==1){
				ans+=395; y+=2;
			}else{
				ans+=200; y++;
			}
		}
		ans+=(999-y)/3*590;
		cout<<ans<<endl;
	}
	return 0;
}

