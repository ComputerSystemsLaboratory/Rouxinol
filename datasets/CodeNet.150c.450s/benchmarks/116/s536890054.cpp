#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int n, k;
	int a[100000];
	for(;;){
		cin >> n >> k;
		if(n == 0 && k == 0) break;
		for(int i = 0; i < n; i++) scanf("%d", &a[i]);
		ll ans = 0;
		for(int i = 0; i < k; i++){
			ans += a[i];
		}
		ll sum = ans;
		for(int i = k; i < n; i++){
			sum -= a[i - k];
			sum += a[i];
			if(sum > ans) ans = sum;
		}
		cout << ans << endl;
	}
	return 0;
}