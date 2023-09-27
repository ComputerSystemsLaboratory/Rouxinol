#include <iostream>
using namespace std;

struct Dice{
	int f[7];
	void move(char dir){
		int sw;
		switch(dir){
		case 'E':
			sw = f[1];
			f[1] = f[4];
			f[4] = f[6];
			f[6] = f[3];
			f[3] = sw;
			break;
		case 'N':
			sw = f[1];
			f[1] = f[2];
			f[2] = f[6];
			f[6] = f[5];
			f[5] = sw;
			break;
		case 'S':
			sw = f[1];
			f[1] = f[5];
			f[5] = f[6];
			f[6] = f[2];
			f[2] = sw;
			break;
		case 'W':
			sw = f[1];
			f[1] = f[3];
			f[3] = f[6];
			f[6] = f[4];
			f[4] = sw;
			break;
		}
	}
};

int main() {
	Dice dice;
	for(int i = 1; i <= 6; ++i){
		cin >> dice.f[i];
	}
	string com;
	cin >> com;
	int n = com.length();
	for(int i = 0; i < n; ++i){
		dice.move(com[i]);
	}
	cout << dice.f[1] << endl;
	return 0;
}