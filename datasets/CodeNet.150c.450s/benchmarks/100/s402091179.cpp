#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
using namespace std;

int main(){
	int n;
	long long int ans=1;
	cin>>n;
	rep(i,1,n+1){
		ans*=i;
	}
	cout<<ans<<endl;
}