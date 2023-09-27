#include<iostream>
using namespace std;

int main(){
	int max1 = 0, max2 = 0, max3 = 0, height;
	while(cin >> height) {
		if (height > max1) {
			max3 = max2;
			max2 = max1;
			max1 = height;
		}
		else if (height > max2) {
			max3 = max2;
			max2 = height;
		}
		else if (height > max3)
			max3 = height;
	}
	cout << max1 << endl;
	cout << max2 << endl;
	cout << max3 << endl;
	return 0;
}