#include<iostream>
using namespace std;
int main(){
int n,i,a[1000];
cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	for(i=n;i>=1;i--){
		if(i==n){
			cout<<a[i];
		}else{
			cout<<" "<<a[i];
		}
	}
	cout<<endl;
	return 0;
}