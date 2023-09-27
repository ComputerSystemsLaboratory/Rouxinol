#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a,b;
	while (cin >> a >> b) {
		int n = 1;
		int sum = a+b;
		while (sum / 10 >= 1){
			n++;
			sum /= 10;
		}
		cout << n << endl;
	}
}