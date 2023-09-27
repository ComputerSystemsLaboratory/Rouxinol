#include <iostream>
using namespace std;

int main() {
	int a, b, gcd, lcm;
	while(cin >> a >> b){
		gcd = 1;
		lcm = 1;
		for(int i = 2; a != 1 || b != 1; i++) {
			while(a % i == 0 || b % i == 0) {
				if(a % i == 0 && b % i == 0){
					a = a / i;
					b = b / i;
					gcd = gcd * i;
					lcm = lcm * i;
				} else if(a % i == 0) {
					a = a / i;
					lcm = lcm * i;
				} else if(b % i == 0) {
					b = b / i;
					lcm = lcm * i;
				}
			}
		}
		cout << gcd << " " << lcm << endl;
	}
	return 0;
}