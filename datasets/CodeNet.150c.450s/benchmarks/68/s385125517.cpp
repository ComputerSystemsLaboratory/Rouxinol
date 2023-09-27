#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(void){
	int n;
	while(cin>>n,n){
		vector<int> a(n);
		rep(i,n)cin>>a[i];
		sort(a.begin(),a.end());
		int dif=INT_MAX;
		rep(i,n-1)dif=min(dif,a[i+1]-a[i]);
		cout<<dif<<endl;
	}
	return 0;
}