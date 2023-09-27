#include<iostream>
#include<algorithm>
#include<string>
#include <vector>

using namespace std;

int main(){

	int x,y,s,taxx,taxy,ans;

	while(cin>>x>>y>>s,x||y||s){
		ans=0;
		for(int i=1;i<s-1;i++){
			for(int j=s-1;j>=i;j--){
				taxx=(i*(100+x))/100+(j*(100+x))/100;
				if(s==taxx){
					taxy=(i*(100+y))/100+(j*(100+y))/100;
					ans=max(ans,taxy);
				}
			}
		}
		cout<<ans<<endl;
	}
}