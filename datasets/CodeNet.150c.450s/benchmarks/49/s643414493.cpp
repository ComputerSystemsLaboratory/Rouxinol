#include<stdio.h>
#include<iostream>
using namespace std;
int main() {
	int a;
	while (cin >> a, a) {
		int sum=0; 
		int d;
		int f;
		int e = 0;
		for (int i = 0; i < a; i++) {
			cin >> d;
			if (i == 0) {
				f = d;
				e = d;
			}
			if (d > e) {
				e = d;
			}
			if (f > d) {
				f = d;
			}
			sum += d;
		}
		sum = sum - (e + f);
		sum = sum / (a-2);
		cout << sum << endl;
	}
}


