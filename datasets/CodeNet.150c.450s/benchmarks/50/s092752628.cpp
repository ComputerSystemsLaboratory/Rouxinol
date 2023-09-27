#include <iostream>
using namespace std;
 
int main() {
	while(true){
		int x;
		cin>>x;
		if(x==0){
			break;
		}
 
		int ans=0,change=1000-x,money[6]={500,100,50,10,5,1};
		for(int i=0;i<6;i++){
			int n=change/money[i];
			ans+=n;
			change-=money[i]*n;
		}
 
		cout<<ans<<endl;
	}
	return 0;
}