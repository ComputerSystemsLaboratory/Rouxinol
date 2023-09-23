
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int a[101] = { 0 };
	int k;
	int mex = 0;
	while (cin >> k) {
		a[k]++;
		if (mex < a[k]) {
			mex = a[k];
			//cout << "mex??´??°" << k << endl;
		}
	}
	for (int i = 1; i <= 100; i++) {
		if (a[i] == mex) {
			cout << i << endl;
		}
	}
    return 0;
}