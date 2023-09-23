#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int a, b, sum;
	while (cin >> a, cin >> b){
		sum = a + b;
		for (int i = 0; i < 10; ++i){
			if (sum == 0){
				cout << i << endl;
				break;
			}
			sum /= 10;
		}
	}

	return 0;
}