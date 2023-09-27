#include<iostream>

using namespace std;

int main(){
	int a, b, c, d, r, s, h;

	while (cin >> a >> b){
		//c
		h = a;
		s = b;
		for (;;){
			r = h % s;
			if (r == 0) {
				c = s;
				break;
			}
			h = s;
			s = r;
		}
		//d
		h = a;
		s = b;
		if (a < b){
			for (;;){
				if ((b % a) == 0){
					d = b;
					break;
				}
				b = b + s;
			}
		}
		else if (a >= b){
			for (;;){
				if ((a % b) == 0){
					d = a;
					break;
				}
				a = a + h;
			}
		}

		cout << c << ' ' << d << endl;
	}
}