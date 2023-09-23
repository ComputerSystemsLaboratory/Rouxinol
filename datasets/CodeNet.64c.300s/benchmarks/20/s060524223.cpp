#include<iostream>
using namespace std;
int a;
int main() {
	while (cin >> a) {
		cout << (900 - a)*(900 - a) * 100 - 9000000 << endl;
	}
}