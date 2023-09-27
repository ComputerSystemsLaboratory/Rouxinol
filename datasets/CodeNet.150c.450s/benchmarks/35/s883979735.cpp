#include <iostream>
using namespace std;
int main() {
	int s,h,n,i,a[5000];
	while(true) {
		cin >> n;
		if (n==0) break;
		for (i=0;i<n;i++) cin >> a[i];
		s=0; h=-100000;
		for (i=0;i<n;i++) {
			s=(s+a[i]>=a[i]) ? s+a[i] : a[i];
			h=(s > h)  ? s : h;
		}
        cout << h << endl;
	}
	return 0;
	}