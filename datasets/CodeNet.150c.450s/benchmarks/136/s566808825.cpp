#include <iostream>

using namespace std;

int main() {

	long long a, b;
	long long min, max;

	while (cin >> a >> b) {

		if (b > a) {
			long long dum = a;
			a = b;
			b = dum;
		}

		//cout << "a=" << a << "b=" << b << endl;
		
		//?????§??¬?´???°????±???????
		//???????????????????????????
		long long new_a = a, new_b = b;
		long long r;
		while (1) {
			r = new_a%new_b;
			if (r == 0) {
				max = new_b;
				break;
			}
			else {
				new_a = new_b;
				new_b = r;
				continue;
			}
		}

		//????°???¬?????°????±???????
		//2,000,000,000?????§?????????
		long long i=1, j=1;
		while (a*i<2000000000&&b*j<2000000000) {
			//cout << "ai=" << a*i << " bj=" << b*j << endl;
			if (a*i == b*j) {
				min = a*i;
				break;
			}
			else if (a*i < b*j) {
				i++;
			}
			else if (a*i > b*j) {
				j++;
			}
			
		}

		cout << max << " " << min << endl;
	}

	return 0;

}