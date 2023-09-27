#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	long a, b;
	while (cin >> a >> b){
		long c = a;
		long d = b;
		while (1){
			if (c < d) swap(c, d);
			// c >= d
			if (c % d == 0){
				cout << d << " " << (a * b) / d << endl;
				break;
			}
			else{
				long tmp = c;
				c = d;
				d = tmp % d;
			}
		}
	}
	return 0;
}