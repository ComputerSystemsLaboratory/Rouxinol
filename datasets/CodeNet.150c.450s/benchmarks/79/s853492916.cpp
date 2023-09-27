//============================================================================
// Name        : aoj1129.cpp
// Author      : afterCmidday
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, r, card[50], p, c;
	while(1){
		cin >> n >> r;
		if(n == 0 && r == 0){
			break;
		}
		for(int i = 0;i < n;i++){
			card[i] = i + 1;
		}
		for(int i = 0;i < r;i++){
			cin >> p >> c;
			int tmp[50];
			//cout << "c" << endl;
			for(int j = 0;j < c;j++){
				tmp[n - 1 - j] = card[n - p - j];
				//cout << n - 1 - j << " " << n - p - j << endl;
			}
			//cout << "p" << endl;
			for(int j = 0;j < p - 1;j++){
				tmp[n - c - 1 - j] = card[n - 1 - j];
				//cout << n - c - 1 - j << " " << n - 1 - j << endl;
			}
			for(int j = 0;j < p - 1 + c;j++){
				card[n - 1 - j] = tmp[n - 1 - j];
			}
		}
		cout << card[n - 1] << endl;
	}
	return 0;
}