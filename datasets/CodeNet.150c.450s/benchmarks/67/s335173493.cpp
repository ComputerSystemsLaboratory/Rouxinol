#include <iostream>
using namespace std;

int main() {
	int n;
	while(cin >> n && n){
		int ans = 0;
		for(int i = 1; i <= n / 2 + 1; ++i){
			int sum = i;
			for(int j = i + 1; j <= n; ++j){
				if(sum == n){
					ans++;
				}
				sum += j;
			}
		}
		cout << ans << endl;
	}
	return 0;
}