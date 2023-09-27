#include <iostream>

using namespace std;

int main() {

	int n;
	int a[5000];

	while(cin >> n) {
		if(n==0)
			break;
		for(int i=0; i<n; i++) {
			cin >> a[i];
		}
		int max=a[0];
		for(int i=0; i<n; i++) {
			int t=0;
			for(int j=i; j<n; j++) {
				t+=a[j];
				if(t>max)
					max=t;
			}
		}
		cout << max << endl;
	}

	return 0;

}