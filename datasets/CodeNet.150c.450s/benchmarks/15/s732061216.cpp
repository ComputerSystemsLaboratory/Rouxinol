#include<iostream>
using namespace std;

int x[9999],y,n,q,r;

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>y;
		for(int j=0;j<n;j++){
			if(y==x[j]){
				r++;
				break;
			}
		}
	}
	cout<<r<<endl;
	return 0;
}