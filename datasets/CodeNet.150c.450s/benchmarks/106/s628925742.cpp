#include <iostream>
using namespace std;
int main(){
	
	int a,b,c,ans;
	ans=0;
	cin>>a>>b>>c;
	
	for(int n=a;n<=b;n++){
		
		if(c%n==0){ans=ans+1;
		}
		
	}
	cout<<ans<<endl;
	
	
}
