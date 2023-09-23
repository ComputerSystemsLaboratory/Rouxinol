#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <math.h>
#include <algorithm>

const int coin[6] = { 500,100,50,10,5,1 };

using namespace std;

int main(){
	
	int answer[5] = { 0 };

	int in = 0, change = 0, n = 0;



	for (int j = 0; j < 5; j++) {
		n = 0;
		cin >> in;
		if (in == 0) break;
		change = 1000 - in;
		for (int i = 0; i < 6; i++) {
			while (change >= coin[i]) {
				change -= coin[i];
				n++;
			}
		}
		answer[j] = n;
	}


	for (int j = 0; j < 5; j++) {
		if (answer[j] == 0) break;
		cout << answer[j] << endl;
	}

	return 0;
}
