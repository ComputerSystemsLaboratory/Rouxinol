#include "bits/stdc++.h"

using namespace std;

const char en = '\n';
using  ll =          long long;
using ull = unsigned long long;

int n,k,ar[100000];
ll result,buf;

int main(){
	ios::sync_with_stdio(false);cin.tie();
	while(true){
		result=0;
		cin>>n>>k;

		if(n==0&&k==0) break;

		for(int i=0;i<n;i++) cin>>ar[i];

		for(int i=0;i<k;i++){
			result+=ar[i];
		}
		buf=result;
		for(int i=k;i<n;i++){
			buf+=ar[i];
			buf-=ar[i-k];
			result=max(result,buf);
		}
		cout<<result<<en;
	}
	return 0;
}