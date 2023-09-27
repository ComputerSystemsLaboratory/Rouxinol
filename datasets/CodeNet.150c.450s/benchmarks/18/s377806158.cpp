#include<iostream>
using namespace std;
int main() {
	int a, b;
	unsigned long f;
	f = 100000;
	cin >> a;
	for (int i = 0; i < a; i++){
		f += f / 20;
		if (f % 1000 != 0) {
			b = f % 1000;
			f += 1000 - b;
		}
	}
	cout << f << endl;
	char k;
	cin >> k;
}