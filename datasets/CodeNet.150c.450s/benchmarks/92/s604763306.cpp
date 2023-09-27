#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	int ans;
	int cnt=0;
	
	while(cin>>a>>b){
		//-----test-----
		if(a==37564) continue;
		
		
		//--------------
		c=a+b;
		ans=1;
		while(10<=c){
			c/=10;
			ans++;
		}
		cout<<ans<<endl;
		cnt++;
	}
	
	return 0;
}