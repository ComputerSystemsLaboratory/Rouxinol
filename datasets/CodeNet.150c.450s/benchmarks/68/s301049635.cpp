#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	while(1){
		int n; cin >> n;
		if(!n) break;

		int a[10001];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}

		sort(a, a+n);

		int ans = 99999999;
		for(int i=0; i<n-1; i++){
			int tmp = a[i+1] - a[i];
			ans = min(ans, tmp);
		}

		cout << ans << endl;
	}

}
