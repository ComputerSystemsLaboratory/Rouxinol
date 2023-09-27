#include <iostream>
using namespace std;
 
int main() {
	while(1){
		int n, k, ans = -1000000, sum = 0;
		cin >> n >> k;
		if (n == 0 && k == 0){
			return 0;
		}
		int yj[200008] = {};
			for(int i = 0; i < n; i++){
				cin >> yj[i];
			}
		for(int i = 0; i < k; i++){
			sum += yj[i];
		}
		for(int i = 0; i < n - k; i++){
			sum += yj[i+k];
			sum -= yj[i];
			ans = max(sum, ans);
		}
		cout << ans << endl;
	}
	return 0;
}