#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int n;
	double d = 100000;
	cin >> n;
	for (int i = 0; i < n; i++) {
		d *=  1.05 / 1000;
		if (d - floor(d) > 0.00001) {
			d = ceil(d) * 1000;
		}else d *= 1000;
	}
	cout << (int)d <<endl;
		
	return 0;
}