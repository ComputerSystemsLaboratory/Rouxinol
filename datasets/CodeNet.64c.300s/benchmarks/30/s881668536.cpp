#include<iostream>

using namespace std;

int main(){

	int yen;
	int ans=0;

	while(cin>>yen){
	if(yen==0) break;
	yen=1000-yen;
	ans=yen%5;
	yen/=5;
	ans+=yen%2;
	yen/=2;
	ans+=yen%5;
	yen/=5;
	ans+=yen%2;
	yen/=2;
	ans+=yen%5;
	ans+=yen/5;
	cout<<ans<<endl;
	}
}