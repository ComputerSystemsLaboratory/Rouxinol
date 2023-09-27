#include<iostream>
using namespace std;

int main() {
	int num, a[32] = {};
	
	for (int i = 0; i < 28; i++) {
		cin >> num;
		a[num] = 1;
	}
	for (int i = 1; i <= 30; i++) {
		if (!a[i])cout << i << endl;
	}
	return 0;
}