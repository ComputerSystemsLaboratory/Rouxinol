#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() 
{
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++){
		int cnt = 0;
		for(int x = 1; x * x <= i; x++){
			for(int y = 1; y <= x; y++){
				for(int z = 1; z <= y; z++){
					if(x*x+y*y+z*z+x*z+x*y+y*z == i){
						if(x!=y && y!=z && x!=z){
							cnt += 6;
						}
						if(x!=y && y!=z && x==z){
							cnt += 3;
						}
						if(x==y && y!=z && x!=z){
							cnt += 3;
						}
						if(x!=y && y==z && x!=z){
							cnt += 3;
						}
						if(x==y && y==z && x==z){
							cnt += 1;
						}
					}
				}
			}	
		}
		cout << cnt << '\n';
	}
}