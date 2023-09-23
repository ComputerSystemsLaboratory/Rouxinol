#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int i, a[3];
	cin >> i;

	bool ans[i];
	for (int j = 0; i > j; j++) {
		cin >> a[0] >> a[1] >> a[2];

		sort(a,a+3);

		if(a[0]*a[0] + a[1] * a[1] == a[2] * a[2]) ans[j] = true;
		else                                       ans[j] = false;
	}

	for(int j = 0; i > j; j++) {
		if(ans[j] == true) cout<<"YES"<<endl;
		else               cout<<"NO"<<endl;
	}
	return 0;
}