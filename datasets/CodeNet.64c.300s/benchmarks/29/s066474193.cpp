#include <bits/stdc++.h>
using namespace std;
#define lp(i,n) for(int i=0;i<n;i++)
int main(){
	while(1){
		int e;
		cin>>e;
		if(e==0) break;
		int ans=e,z;
		for(int i=0;i*i*i<=e;i++){
			for(int j=0;j*j+i*i*i<=e;j++){
				z=e-i*i*i-j*j;
				ans=min(ans,z+i+j);
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}
