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
	int dum = num[0];
	switch (s)
	{
		case 'N':
			num[0] = num[1];
			num[1] = num[5];
			num[5] = num[4];
			num[4] = dum;
			break;
		case 'E':
			num[0] = num[3];
			num[3] = num[5];
			num[5] = num[2];
			num[2] = dum;
			break;
		case 'W':
			num[0] = num[2];
			num[2] = num[5];
			num[5] = num[3];
			num[3] = dum;
			break;
		case 'S':
			num[0] = num[4];
			num[4] = num[5];
			num[5] = num[1];
			num[1] = dum;
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
	int a, b, c, d, e, f;
	string s;
	cin >> a >> b >> c >> d >> e >> f >> s;
	Dice dice(a, b, c, d, e, f);
	dice.mroll(s);
	cout << dice.num[0] << endl;
}
