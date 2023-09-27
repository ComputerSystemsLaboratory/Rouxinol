#include<iostream>
using namespace std;	

int prime(int x){
	for(int j=2;j*j<=x;j++){
		if(x%j==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n,x,ans=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		ans+=prime(x);
	}
	cout<<ans<<endl;
	return 0;
}