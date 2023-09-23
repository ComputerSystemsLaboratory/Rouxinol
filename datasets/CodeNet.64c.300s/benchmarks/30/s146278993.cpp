#include <iostream>
using namespace std;

int main() {
	int sum, sum2, num500, num100, num50, num10, num5, num1, numcoin;
	
	while (1) {
		cin >> sum;
		if (sum == 0) break;
		num500 = num100 = num50 = num10 = num5 = num1 = 0;
		
		sum2 = 1000 - sum;
		if (sum2 >= 500) {
			num500++;
			sum2 -= 500;
		}
		if(sum2 >= 100) {
			num100 += sum2 / 100;
			sum2 %= 100;
		}
		if (sum2 >= 50) {
			num50++;
			sum2 -= 50;
		}
		if (sum2 >= 10) {
			num10 += sum2 / 10;
			sum2 %= 10;
		}
		if (sum2 >= 5) {
			num5++;
			sum2 -= 5;
		}
		num1 = sum2;
		
		numcoin = num500 + num100 + num50 + num10 + num5 + num1;
		cout << numcoin <<endl;
	}
	return 0;
}