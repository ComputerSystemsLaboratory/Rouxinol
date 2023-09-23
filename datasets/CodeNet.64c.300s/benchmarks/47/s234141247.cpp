#include <iostream>
using namespace std;
int main() {
	int n, count = 0;
	int array[100];
	for(int i = 0; i < 100; i++) {
		array[i] = 0;
	}
	while(cin >> n) {
		array[n - 1]++;
		if(count < array[n - 1]) {
			count = array[n - 1];
		}
	}
	for(int i = 0; i < 100; i++) {
		if(count == array[i]) {
			cout << i + 1 << endl;
		}
	}
	return 0;
}