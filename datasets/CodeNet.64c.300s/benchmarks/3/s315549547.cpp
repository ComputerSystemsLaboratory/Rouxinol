#include<iostream>
#include<string>
#include<algorithm>	
#include<cmath>
using namespace std;
int main() {
	int a, b; 
	cin >> a;
	int test[1010] = { 0 };
	for (int h = 1; h <= a; h++) {
		cin >> b;
		test[h] = b;
	}
	for (int h = a; h >= 1; h--) {
		cout << test[h];
		if (h >= 2) {
			cout << ' ';
		}
	}
	cout << endl;
}
