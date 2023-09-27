#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	int ans;
	bool flg;
	int cnt=0;
	
	while(cin>>a>>b){
		cnt++;flg=false;
		//-----test-----
		if(cnt==200) break;
		//--------------
		c=a+b;
		ans=1;
		while(10<=c){
			c/=10;
			ans++;
		}
		cout<<ans<<endl;
	}
	
	return 0;
}