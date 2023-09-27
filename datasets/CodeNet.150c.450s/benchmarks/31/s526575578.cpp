#include <iostream>
#include <algorithm>
using namespace std;
int main(void){
    int n, maxv = -2000000000, mina;
	cin >> n;
	int a[200000];
	for(int i = 0; i < n; i++) cin >> a[i];
	mina = a[0];
	for (int i = 1; i < n; i++) {
		maxv = max(maxv, a[i]-mina);
		mina = min(mina, a[i]);
	}
	cout << maxv <<endl;
	return 0;
}