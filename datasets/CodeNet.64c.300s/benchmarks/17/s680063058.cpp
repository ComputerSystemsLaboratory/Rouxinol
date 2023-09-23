#include <bits/stdc++.h>
using namespace std;
int main() {
	double n,m,s;
	while(cin>>n>>m>>s,n){
		int ans=0;
		n+=100;
		m+=100;
		for(int i=1;i<s;i++){
			for(int j=1,x,y;j<s;j++){
				x=i*n/100;
				y=j*n/100;
				if(x+y==s){
					x=i*m/100;
					y=j*m/100;
					ans=max(ans,x+y);
				}
			}
		}
		cout<<ans<<endl;
	}
}