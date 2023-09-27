#include <iostream>
#include <cstring>
#include <sstream>
#include <cctype>
#include <cmath>
#include <cstdio>
using namespace std;
#define MPI  3.14159265358979323846

struct Dice{
	int num[6];
	void roll(char);
};

void Dice::roll(char c){
	switch (c) {
		int tmp;
	case'N':
		tmp = num[0];
		num[0] = num[1];
		num[1] = num[5];
		num[5] = num[4];
		num[4] = tmp;
		break;
	case'S':
		tmp = num[0];
		num[0] = num[4];
		num[4] = num[5];
		num[5] = num[1];
		num[1] = tmp;
		break;
	case'E':
		tmp = num[0];
		num[0] = num[3];
		num[3] = num[5];
		num[5] = num[2];
		num[2] = tmp;
		break;
	case'W':
		tmp = num[0];
		num[0] = num[2];
		num[2] = num[5];
		num[5] = num[3];
		num[3] = tmp;
		break;
	default:break;
	}
}

int main(){

	Dice Dice1;

	for (int i = 0; i < 6; i++){
		cin >> Dice1.num[i];
	}
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++){
		Dice1.roll(s[i]);
	}

	cout << Dice1.num[0] << endl;

	return 0;
}
