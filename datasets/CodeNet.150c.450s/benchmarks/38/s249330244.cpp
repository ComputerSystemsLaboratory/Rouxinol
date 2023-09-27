#include<iostream>
#include<algorithm>
using namespace std;
int n,a[3];
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[0]>>a[1]>>a[2];
		sort(a,a+3);
		if(a[0]*a[0]+a[1]*a[1]!=a[2]*a[2])cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
}