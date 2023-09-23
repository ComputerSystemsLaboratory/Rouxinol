#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main(){
	while(1){
		int ans = 0;
		int n; cin >> n;
		if (n == 0) break;
		for (int i = 1; i < n; i++){
			int sum = 0;
			for (int j = i; j < n; j++){
				sum += j;
				if (sum == n){
					ans++;
					break;
				}else if (sum > n){
					break;
				}
			}
		}
		cout << ans << endl;
	}
return 0;
}