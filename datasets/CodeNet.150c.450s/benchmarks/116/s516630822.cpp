#include <iostream>

using namespace std;

int main() {

	int n, k;
	int a[100000];

	while(cin >> n >> k) {
		if(n==0&&k==0) {
			break;
		}
		for(int i=0; i<n; i++) {
			cin >> a[i];
		}
		int max=a[0];
		int t=0;
		for(int i=0; i<k; i++) {
			t+=a[i];
		}
		if(t>max) {
			max=t;
		}
		for(int i=k; i<n; i++) {
			t+=a[i];
			t-=a[i-k];
			if(t>max) {
				max=t;
			}
		}
		cout << max << endl;
	}

	return 0;

}