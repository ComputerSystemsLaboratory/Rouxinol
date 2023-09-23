#include <iostream>
using namespace std;
int main(void){

	int x, y;
	cin >> x >> y;
	while (y != 0){
		int temp = x % y;
		x = y;
		y = temp;
	}

	cout << x << endl;
}