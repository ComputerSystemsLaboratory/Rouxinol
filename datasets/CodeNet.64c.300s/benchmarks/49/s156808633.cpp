#include<iostream>
using namespace std;

int main() {
	int a, b;

	while (cin >> a >> b) {
		int sum, i;
		sum = a + b;
		for (i = 0; sum > 9;i++){
			sum /= 10;
		}
		cout << i+1 << endl;
	}

	return  0;
}