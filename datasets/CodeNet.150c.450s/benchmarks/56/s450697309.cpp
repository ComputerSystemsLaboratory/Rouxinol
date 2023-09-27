#include <bits/stdc++.h>
using namespace std;

int main() {long long x,t,mx=-10e6-8,mn=10e6+8,sum=0;
	// your code goes here
	cin>>t;
	while(t--){cin>>x;
		mx=max(mx,x);
		mn=min(mn,x);
		sum+=x;
	} 
	cout<<mn<<" "<<mx<<" "<<sum<<endl;
	return 0;
}