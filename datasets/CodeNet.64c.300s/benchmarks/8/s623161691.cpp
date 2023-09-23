#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

void call2(int num) {

	//numを10で割っていって、 
	//numを10で割った商が0になるまでループ

	for (int i = 3; i<=num; i++) {

		//３の倍数なら出力
		if (i % 3 == 0) {
			cout << " " << i;
			continue;
		}
		for (int j = i; j!=0; j /= 10) {
			//３のつく数字なら出力
			if (j % 10 == 3) {
				cout << " " << i;
				break;
			}
		}
	}
	cout << endl;
}

int main() {

	//call(50);
	int num;
	cin >> num;
	call2(num);

	return 0;
}
