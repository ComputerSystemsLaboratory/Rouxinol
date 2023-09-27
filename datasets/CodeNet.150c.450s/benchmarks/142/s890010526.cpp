#include<iostream>
using namespace std;
int a[200010];
int main() {
	int n,k;
	cin>>n>>k;
	for(int i=1; i<=n; i++) cin>>a[i];
	for(int i=1; i<=n-k; i++) {
		if(a[i]<a[i+k]) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}