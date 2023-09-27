#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	int n,ans=100000;
	cin>>n;
	
	for(int i=0;i<n;i++){
		ans*=1.05;
		if(ans%1000!=0){
			ans=ans-(ans%1000);
			ans+=1000;
		}
	}
	cout<<ans<<endl;
    return 0;
}