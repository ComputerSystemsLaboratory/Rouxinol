#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin >> n, n){
		int a[5000], ans = -100001;
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++){
			int sum = 0;
			for(int j = i; j < n; j++){
				sum += a[j];
				ans = max(ans, sum);
			}
		}
		cout << ans << endl;
	}
	return 0;
}