#include<iostream>

using namespace std;

int main(void) {
	bool flg[30];
	int in;
	int i;

	for(i = 0; i < 30; i++) { flg[i] = true; }
	for(i = 0; i < 28; i++) {
		cin >> in;
		flg[in - 1] = false;
	}
	for(i = 0; i < 30; i++) {
		if(flg[i]) { cout << i + 1 << endl; }
	}

	return 0;
}