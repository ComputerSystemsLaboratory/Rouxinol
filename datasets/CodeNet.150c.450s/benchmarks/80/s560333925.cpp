#include <iostream>

using namespace std;

int main(void) {
	int point[2][5];
	
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 4; j++) {
		cin >> point[i][j];
		}
		point[i][4] = 0;
	}
	
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 4; j++) {
			point[i][4] += point[i][j];
		}
	}
	
	if(point[0][4] >= point[1][4]) {
		cout << point[0][4] << endl;
	} else {
		cout << point[1][4] << endl;
	}
	
	return 0;
}