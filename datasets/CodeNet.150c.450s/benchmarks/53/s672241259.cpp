#include <iostream>
#include<math.h>
using namespace std;
typedef long long ll;

int main() {
	ll input_num,s;
	cin >> input_num;
	cout << input_num << ":";
	s = floor(sqrt(input_num));
	for (int i = 2; i <= s; i++) {
		if (input_num % i == 0) {
			cout << " " << i;
			input_num = input_num / i;
			while(input_num % i == 0){
				cout << " " << i;
				input_num = input_num / i;
			}
			if (input_num == 1) {
				break;
			}
		}
	}
	if (input_num != 1) {
		cout << " " << input_num;
	}
	cout << endl;
	return 0;
}