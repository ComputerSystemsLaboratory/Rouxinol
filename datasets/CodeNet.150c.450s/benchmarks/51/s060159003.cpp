#include<iostream>
#include<string>
#include<algorithm>	
#include<cmath>
using namespace std;
int main() {
	int n; int test[31] = { 0 };
	for (int h = 0; h < 28; h++) {
		cin >> n;
		test[n]++;
	}
	for (int h = 1; h <= 30; h++) {
		if (test[h] == 0) {
			cout << h << endl;
		}
	}
	cin >> n;
}
