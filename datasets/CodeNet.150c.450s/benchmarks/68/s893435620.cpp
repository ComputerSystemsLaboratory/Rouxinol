#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll,ll> mp;
#define inf 1e9


int main(){

	while(1){
		int n;
		cin>>n;
		if(n==0)break;
		vector<int> a(n);
		for(int i=0;i<n ;i++){
			cin>>a[i];
		}
		sort(a.begin(),a.end());
		int m = 1e9;
		for(int i=0;i<n-1;i++)m = min(m,a[i+1]-a[i]);
		cout<<m<<endl;
	}

	return 0;
}

