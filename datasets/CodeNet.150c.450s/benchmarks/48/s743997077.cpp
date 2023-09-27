#include <bits/stdc++.h>
using namespace std;

int main(void){
	int e;
	while(1){
		cin >> e;
		if(!e) break;
		int ans = 1000001;
		for(int z = 0; z*z*z <= e; ++z){
			for(int y = 0; z*z*z+y*y <= e; ++y){
				ans = min(ans,e-(z*z*z+y*y)+y+z);
			}
		}
		cout << ans << endl;
	}
	return 0;
}
