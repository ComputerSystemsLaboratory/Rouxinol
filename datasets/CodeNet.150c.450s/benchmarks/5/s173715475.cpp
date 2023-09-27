#include<iostream>
using namespace std;

int main(){
	int a[101];
	int i,n;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];	
	}
	
	for(i=0;i<n;i++){
		int k=n-i;
		cout<<a[k];
		if(i!=n-1){
			cout<<" ";
		}
	}
	cout<<endl;
	
	
	return 0;
}