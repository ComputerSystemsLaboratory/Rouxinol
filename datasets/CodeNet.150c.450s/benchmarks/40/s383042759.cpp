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
	int Play(char c);
	int T;
private:
	int NS[4],EW[4];
	int NS_p,EW_p;
};

//?????????????????????
Dice::Dice(int num[6])
{
	NS_p = 0;
	EW_p = 0;
	NS[0] = num[0];
	NS[1] = num[1];
	NS[2] = num[5];
	NS[3] = num[4];
	EW[0] = num[0];
	EW[1] = num[3];
	EW[2] = num[5];
	EW[3] = num[2];
	T = num[0];
}

int Dice::Play(char c){

	if (c == 'N' || c == 'S'){
		if(c == 'N') NS_p = (NS_p + 1) % 4;
		else {
			if (NS_p == 0) NS_p = 3;
			else NS_p--;
		}
		EW[EW_p] = NS[NS_p];
		EW[(EW_p+2)%4] = NS[(NS_p+2)%4];
	}
	else if (c == 'E' || c == 'W'){
		if (c == 'E') EW_p = (EW_p + 1) % 4;
		else {
			if (EW_p == 0) EW_p = 3;
			else EW_p--;
		}
		NS[NS_p] = EW[EW_p];
		NS[(NS_p + 2) % 4] = EW[(EW_p + 2) % 4];
	}
	T = NS[NS_p];
	
	return 1;
}


int main(){

	int num[6];
	char c;

	for (int i = 0; i < 6; i++){
		cin >> num[i];
	}

	Dice d1(num);

	while (cin >> c){
		d1.Play(c);
	}

	cout << d1.T << endl;

	return 0;
}