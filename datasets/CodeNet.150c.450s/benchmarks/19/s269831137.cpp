#include <iostream>
using namespace std;

void swap(int &x, int &y) {
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}

int main() {
	int data1, data2;
	while(1) {
		cin >> data1 >> data2;
		if (data1 == 0 && data2 == 0) {
			break;
		}
		if (data1 > data2) {
			swap(data1, data2);
		}
		
		cout << data1 << " " << data2 << endl;
		
	}
	return 0;
}