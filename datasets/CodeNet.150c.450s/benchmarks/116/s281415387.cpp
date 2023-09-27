#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n, k;
	int ans;
	while (true){
		int a[100001] = {}, b[100001] = {};
		n = 0; k = 0;
		ans = 0;
		cin >> n >> k;
		if (n == 0 || k == 0)	break;
		for (int i = 1; i <= n; i++){
			cin >> a[i];
		}
		for (int x = 0; x<k; x++){
			b[1] += a[x + 1];
		}
		ans = b[1];
		for (int i = 2; i <= n; i++){
			if ((i+k)==(n+1))	break;
			b[i] = b[i - 1] - a[i - 1] + a[i + k - 1];
			ans = max(b[i], ans);
		}
		cout << ans << endl;
	}
	return 0;
}