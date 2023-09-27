#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n;
	while(cin >> n,n){
		int a[100];
		for (int i = 0; i < n; ++i) cin >> a[i];
		sort(a,a+n);
		int sum = 0;
		for (int k = 1; k < n-1; ++k){
			// cout << a[k] << " ";
			sum += a[k];
		}
		// cout << n << endl;
		cout << sum/(n-2) << endl;	
	}
	return 0;
}