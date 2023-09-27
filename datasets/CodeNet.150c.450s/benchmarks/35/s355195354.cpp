#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n, a[5000];
	for(;;){
		cin >> n;
		if(n == 0) break;
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 1; i < n; i++) a[i] += a[i - 1];
		int min_sum = 0, ans = a[0];
		for(int i = 1; i < n; i++){
			min_sum = min(min_sum, a[i - 1]);
			ans = max(ans, a[i] - min_sum);
		}
		cout << ans << endl;
	}
	return 0;
}
