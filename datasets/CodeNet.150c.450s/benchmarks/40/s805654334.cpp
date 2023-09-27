#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include<string>
using namespace std;
class oppal{
public:
	int num[6],tmp;
	void moveS(){
		tmp = num[0];
		num[0] = num[4];
		num[4] = num[5];
		num[5] = num[1];
		num[1] = tmp;
	}
	void moveN(){
		tmp = num[0];
		num[0] = num[1];
		num[1] = num[5];
		num[5] = num[4];
		num[4] = tmp;
	}
	void moveW(){
		tmp = num[0];
		num[0] = num[2];
		num[2] = num[5];
		num[5] = num[3];
		num[3] = tmp;
	}
	void moveE(){
		tmp = num[0];
		num[0] = num[3];
		num[3] = num[5];
		num[5] = num[2];
		num[2] = tmp;
	}
};
int main(){
	string move;
	oppal a;
	for (int i = 0; i < 6; i++){
		cin >> a.num[i];
	}

	cin >> move;

	for (int i = 0; i < move.size(); i++){
		if (move[i] == 'S'){
			a.moveS();
		}
		else if (move[i] == 'N'){
			a.moveN();
		}
		else if (move[i] == 'W'){
			a.moveW();
		}
		else if (move[i] == 'E'){
			a.moveE();
		}
	}

	cout << a.num[0] << endl;

	return 0;
}
