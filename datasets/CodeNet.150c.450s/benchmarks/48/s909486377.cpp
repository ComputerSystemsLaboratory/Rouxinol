#include <bits/stdc++.h>
using namespace std;
int main(){
	int e;
	while(cin>>e,e){
		int ans=100000000;
		for(int z=0;z*z*z<=e;z++){
			for(int y=0;y*y<=e-z*z*z;y++){
				ans=min(ans,e-z*z*z-y*y+y+z);
			}
		}
		cout<<ans<<endl;
	}
}