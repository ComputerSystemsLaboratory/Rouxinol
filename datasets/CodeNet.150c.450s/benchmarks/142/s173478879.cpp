#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int n,k;
	cin>>n>>k;
	int a[n+1];
	for(int i=1;i<=n;++i)cin>>a[i];
	for(int i=1;i<=n-k;++i){
		if(a[i]<a[i+k])
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
	 return 0;
}