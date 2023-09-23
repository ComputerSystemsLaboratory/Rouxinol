#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int ans=100000;
	for(int i=0;i<n;i++){
	ans+=ans*5/100;
	if(ans%1000)ans+=(1000-ans%1000);
	}
	
	
	cout<<ans<<endl;
}