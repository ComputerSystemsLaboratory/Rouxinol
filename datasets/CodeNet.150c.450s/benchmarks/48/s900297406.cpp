#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
	int e;
	while(cin >> e && e){
		int ans = (1<<23);
		for(int z = 0; z*z*z<=e;z++)
			for(int y=0;y*y <= e-z*z*z;y++)
				ans = min(ans,z+y+e-z*z*z-y*y);
		cout << ans << endl;
	}
}