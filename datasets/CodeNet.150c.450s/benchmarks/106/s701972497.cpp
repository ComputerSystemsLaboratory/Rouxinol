#include<iostream>
using namespace std;

int main() {
	int a,b,c,n=0;
	cin >> a >> b >> c;
	for (int x=a;x <= b; x++) {
		if (c%x == 0) {
			n += 1;
		}
	}
	cout << n << endl;
	return 0;
}