#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <iomanip>
using namespace std;

#define pi 3.141592653589

int main(){
	int n;
	long *a;
	cin >> n;
	a = new long[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	long maxas = -1000000;
	for (int i = 0; i < n; i++){
		maxas = max(maxas, a[i]);
	}
	long minas = 1000000;
	for (int i = 0; i < n; i++){
		minas = min(minas, a[i]);
	}
	long sum = 0;
	for (int i = 0; i < n; i++){
		sum += a[i];
	}

	cout << minas << " " << maxas << " " << sum << endl;
	delete[] a;
	return 0;
}