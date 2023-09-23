#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int e;
	int x,y,z;
	int y2,z3;
	while(cin>>e,e){
		int ans=1<<30;
		for(z=0;(z3=z*z*z)<=e;z++){
			for(y=0;(y2=y*y)+z3<=e;y++){
				ans = min(ans,e-z3-y2+y+z);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}