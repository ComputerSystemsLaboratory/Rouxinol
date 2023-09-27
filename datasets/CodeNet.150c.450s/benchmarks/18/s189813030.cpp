#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
	long long int ans=100000;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		ans=ans*105/100;
		if(ans%1000!=0){
			ans=ans/1000*1000+1000;
		}
	}
	cout<<ans<<endl;
    return 0;
}