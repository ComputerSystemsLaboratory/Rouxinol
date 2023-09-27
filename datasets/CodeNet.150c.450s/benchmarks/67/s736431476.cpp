#include<iostream>
using namespace std;
int main() {
	int n;
	while (cin >> n){
		if (n == 0)return 0;
		int sum = 0;
		for (int i = 2; i < 46; i++){
			if (i % 2 == 0) {
				if (n % i == i / 2) {
					if (n >= i*i / 2)sum++;
				}
			}
			else {
				if (n % i == 0) {
					if (n >= i*(i + 1) / 2)sum++;
				}
			}
		}
		cout << sum << endl;
	}
}