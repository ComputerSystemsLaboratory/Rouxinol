#include<iostream>
using namespace std;

int main(){
	int a[101];
	int i,n;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];	
	}
	
	for(i=n;i>=1;i--){
		cout<<a[i];
		if(i!=1){
			cout<<" ";
		}
	}
	cout<<endl;
	
	
	return 0;
}