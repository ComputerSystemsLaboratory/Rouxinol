#include<iostream>
using namespace std;
int main(){
	int i,j,n,x,l;
	char a[100001],b[100001],c[100001],m;
	while(true){
	cin>>n;
	if(n==0){
	break;
	}
	for(i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}
	cin>>x;
	for(j=0;j<x;j++){
		cin>>c[j];
	}
	for(l=0;l<x;l++){
		for(int k=0;k<n;++k){
			if(c[l]==a[k]){
				c[l]=b[k];
				break;
			}
		}
	}
	for(int k=0;k<x;++k){
		cout<<c[k];
	}
	cout<<endl;
	}
	return 0;
}