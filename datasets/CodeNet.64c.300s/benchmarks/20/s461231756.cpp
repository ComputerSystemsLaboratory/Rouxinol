#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		long long int ans=0;
		for(int i=n;i<600;i+=n){
			ans+=(long long)i*i*n;
		}
		cout<<ans<<endl;
	}

	return 0;
}