#include<iostream>
using namespace std;
int main(){
	int n,a[100],b,i;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i-1];
	}
	for(b=n;b>=1;b--){
		if(b==n){
			cout<<a[b-1];
		}else{
			cout<<" "<<a[b-1];
		}
	}
	cout<<endl;
	return 0;
}        