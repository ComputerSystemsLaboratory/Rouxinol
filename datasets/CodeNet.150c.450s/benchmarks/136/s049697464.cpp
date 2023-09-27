#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main() {
	int a, b, c, d;
	while(cin >> a >> b) {
		c = a;
		d = b;
		while (1) {
			if(a == 0) {
			cout << 0 << " " << 0 << endl;
			break;
			}
			if ((max(a, b) % min(a, b)) == 0) {
				cout << min(a, b);
				break;
			}else if(a > b) {
				a  = a%b;
			}else b = b%a;
		}
		if(a != 0) { 
		cout << " " << c / min(a,b) * d << endl;
		}
	}

	return 0;
}