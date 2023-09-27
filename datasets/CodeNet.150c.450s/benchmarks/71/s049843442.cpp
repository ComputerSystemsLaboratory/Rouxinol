#include <iostream>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n;
	while(cin >> n){
	
	int ans = 0;
	for(int i = 0; i <= 9; ++i){
		for(int j = 0; j <= 9; ++j){
			for(int k = 0; k <= 9; ++k){
				for(int l = 0; l <= 9; ++l){
					if(i + j + k + l == n){
						ans++;
					}
				}
			}
		}
	}
	
	cout << ans << endl;
	
	}
	
	return 0;
}