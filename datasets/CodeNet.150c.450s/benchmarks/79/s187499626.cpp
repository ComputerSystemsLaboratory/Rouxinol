#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
#define pi 3.14159
using namespace std;


int main() {
	int n, r;
	while(cin >> n >> r) {
		if(n == 0 && r == 0) break;
		int a[50], b[50];
		for(int i = 0; i < n; i++) {
			a[i] = n - i;
		}
		for(int i = 0; i < n; i++) {
			b[i] = n - i;
		}
		for (int i = 0; i < r; i++) {
			int p, c;
			cin >> p >> c;
			for(int j = 0; j < c; j++) {
				b[j] = a[p + j - 1];
			}
			for(int j = 0; j < p-1; j++) {
				b[c + j] = a[j];
			}
			for(int j = 0; j < n; j++) {
				a[j] = b[j];
			}
		}
		cout << b[0] <<endl;
	}


	return 0;
}