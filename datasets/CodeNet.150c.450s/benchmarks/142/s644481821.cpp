#include <bits/stdc++.h>
using namespace std;
long long a[200000];
int n,k;
int main(){
	cin>>n>>k;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	for(int i=0;i<n-k;++i){
		if(a[i]>=a[i+k]){
			cout<<"No"<<endl;
		}
		else{
			cout<<"Yes"<<endl;
		}
	}
}