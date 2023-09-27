#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a[32];
	int i,j,k,n,m;
	char c;
	for(i=0;i<32;i++){
		a[i]=i;
	}
	cin>>n>>m;
	for(i=0;i<m;i++){
		cin>>j>>c>>k;
		swap(a[j],a[k]);
	}
	for(i=1;i<=n;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}