#include <iostream>
using namespace std;

struct Dice{
	int f[7];
	int n[100];
	int right[7][7] = { {0, 0, 0, 0, 0, 0, 0},
						{0, 0, 3, 5, 2, 4, 0},
						{0, 4, 0, 1, 6, 0, 3},
						{0, 2, 6, 0, 0, 1, 5},
						{0, 5, 1, 0, 0, 6, 2},
						{0, 3, 0, 6, 1, 0, 4},
						{0, 0, 4, 2, 5, 3, 0} };
	
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
	int getright(int up, int front){
		return f[right[up][front]];
	}
};

int main() {
	Dice dice;
	for(int i = 1; i <= 6; ++i){
		cin >> dice.f[i];
		dice.n[dice.f[i]] = i;
	}
	int n;
	cin >> n;
	int up, front;
	for(int i = 0; i < n; ++i){
		cin >> up; cin >> front;
		cout << dice.getright(dice.n[up], dice.n[front]) << endl;
	}
	return 0;
}