//#define _USE_MATH_DEFINES
#include <iostream>
//#include <stdio.h>
//#include <iomanip>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <functional>
//#include <cmath>

using namespace std;

class Dice
{
public:
	Dice(int num[6]);
	int check_R(int t,int f);
	int T,F;
private:
	int _num[6];
	int _pattern[6][3];
};

//?????????????????????
Dice::Dice(int num[6])
{
	for (int i = 0; i < 6; i++){
		_num[i] = num[i];
	}

	T = _num[0];
	F = _num[1];

	int buf[6][3] = { { 1, 2, 3 }, { 2, 6, 3 }, { 3, 6, 5 }, { 4, 6, 2 }, { 5, 1, 3 }, { 6, 5, 3 } };
	for (int i = 0; i < 6; i++){
		for (int j = 0; j < 3; j++){
			_pattern[i][j] = buf[i][j];
		}
	}
}

int Dice::check_R(int t, int f){

	int ti, fi, ri;

	for (int i = 0; i < 6; i++){
		if (t == _num[i])ti = i;
		if (f == _num[i])fi = i;
	}

	if (fi == _pattern[ti][1] - 1) ri = _pattern[ti][2] - 1;
	if (fi == _pattern[ti][2] - 1 ) ri = 7 -_pattern[ti][1] - 1;
	if (fi == 7 - _pattern[ti][1] - 1) ri = 7 -_pattern[ti][2] -1;
	if (fi == 7 - _pattern[ti][2] - 1) ri = _pattern[ti][1] -1;

	return _num[ri];
}



int main(){

	int num[6], n, top, front,R;
	char c;

	for (int i = 0; i < 6; i++){
		cin >> num[i];
	}

	Dice d1(num);

	cin >> n;

	while (n--){
		cin >> top >> front;

		R = d1.check_R(top,front);
		cout << R << endl;
	}


	return 0;
}