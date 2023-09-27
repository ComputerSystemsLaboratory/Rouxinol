#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
const int INF=INT_MAX,MOD=1e9+7;

int main(){
	int n; cin>>n;
	int fib[n+1]; fib[0]=fib[1]=1;
	for(int i=2;i<n+1;i++){
		fib[i]=fib[i-1]+fib[i-2];
	}
	cout<<fib[n]<<endl;
	return 0;
}

