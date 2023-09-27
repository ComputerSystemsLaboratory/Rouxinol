#include <iostream>
#include <string>
using namespace std;

class Dice{
public:
	int num[6];

	Dice(int a, int b, int c, int d, int e, int f);
	void roll(char s);
	void mroll(string s);
};

Dice::Dice(int a, int b, int c, int d, int e, int f){
	num[0] = a;
	num[1] = b;
	num[2] = c;
	num[3] = d;
	num[4] = e;
	num[5] = f;
}

void Dice::roll(char s){
	int dum;
	switch (s)
	{
		case 'N':
			dum = num[0];
			num[0] = num[1];
			num[1] = num[5];
			num[5] = num[4];
			num[4] = dum;
			break;
		case 'E':
			dum = num[0];
			num[0] = num[3];
			num[3] = num[5];
			num[5] = num[2];
			num[2] = dum;
			break;
		case 'W':
			dum = num[0];
			num[0] = num[2];
			num[2] = num[5];
			num[5] = num[3];
			num[3] = dum;
			break;
		case 'S':
			dum = num[0];
			num[0] = num[4];
			num[4] = num[5];
			num[5] = num[1];
			num[1] = dum;
			break;
		case 'R':
			dum = num[1];
			num[1] = num[2];
			num[2] = num[4];
			num[4] = num[3];
			num[3] = dum;
			break;
		case 'L':
			dum = num[1];
			num[1] = num[3];
			num[3] = num[4];
			num[4] = num[2];
			num[2] = dum;
			break;
		default:
			break;
	}
	return;
}

void Dice::mroll(string s){
	for (int i = 0; s[i] != '\0'; i++){
		roll(s[i]);
	}
	return;
}

int main(){
	int a, b, c, d, e, f, q;
	cin >> a >> b >> c >> d >> e >> f >> q;
	Dice dice(a, b, c, d, e, f);
	int up, front;
	for (int i = 0; i < q; i++){
		cin >> up >> front;
		for (int j = 0; j < 3; j++){
			if (dice.num[0] == up) break;
			dice.roll('N');
			if (dice.num[0] == up) break;
			dice.roll('E');
		}
		for (int j = 0; j < 4; j++){
			if (dice.num[1] == front) break;
			dice.roll('L');
		}
		cout << dice.num[2] << endl;
	}
}
