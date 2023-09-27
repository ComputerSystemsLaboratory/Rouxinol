#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int x, y, s;
	while(1) {
		cin >> x >> y >> s;
		int max = 0;
		if(x == y) break;
		for(int i = 1; i < s/2 + 1; i++) {
			int temp1, temp2;
			temp1 = int(ceil(double((s - i)) * 100 / (100 + x)));
			temp2 = int(ceil(double(i) * 100 / (100 + x)));
			if(temp1 * (100+x) / 100 == s - i) {
				if(temp2 * (100+x) / 100 == i) {
					temp1 = temp1 * (100 + y) / 100;
					temp2 = temp2 * (100 + y) / 100;
					if(max < temp1 + temp2) max = temp1 + temp2;
				}
			}
		}
		cout << max <<endl;
	}

	return 0;
}