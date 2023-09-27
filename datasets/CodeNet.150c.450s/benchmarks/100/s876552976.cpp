#include <iostream>
using namespace std;

int main(){
	long long int n,ans=1;
	cin>>n;
	for(int i=n;i>0;i--){
		ans=ans*i;
}
	cout<<ans<<endl;
}