#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n;
	cin>>n;
	ll N=sqrt(n),ans[100010]={};
	for(int x=1;x<=N;x++){
		for(int y=1;y<=N;y++){
			for(int z=1;z<=N;z++){
				ans[x*x+y*y+z*z+x*y+x*z+y*z]++;
			}
		}
	}
	for(int i=1;i<=n;i++)cout<<ans[i]<<endl;
	return 0;
}
