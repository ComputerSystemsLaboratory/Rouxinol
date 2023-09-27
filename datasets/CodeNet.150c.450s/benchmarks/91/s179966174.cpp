#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int array[1000000];
	int n, count = 0;
	for(int i = 0; i < 1000000; i++) {
		array[i] = 1;
	}
	array[0] = 0;
	array[1] = 0;
	for(int i = 2; i < 1000000; i++) {
		if(array[i] != 0) {
			for(int j = i * 2; j < 1000000; j += i) {
				array[j] = 0;
			}
		}
	}
	while(cin >> n) {
		for(int i = 0; i <= n; i++) {
			count += array[i];
		}
		cout << count << endl;
		count = 0;
	}

	return 0;
}