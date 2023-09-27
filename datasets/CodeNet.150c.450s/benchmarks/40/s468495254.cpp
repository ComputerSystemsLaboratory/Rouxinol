#include<iostream>
#include<string>
using namespace std;

class Dice {
public:
	Dice(int num[6]) {
		t = num[0];
		b = num[5];
		n = num[4];
		s = num[1];
		w = num[3];
		e = num[2];
	}
	
	void roll_e() {
		int temp = w;
		w = b;
		b = e;
		e = t;
		t = temp;
	}
	void roll_w() {
		for (int i = 0; i < 3; i++)roll_e();
	}
	void roll_n() {
		int temp = s;
		s = b;
		b = n;
		n = t;
		t = temp;
	}
	void roll_s() {
		for (int i = 0; i < 3; i++)roll_n();
	}
	int getTop() {
		return t;
	}
private:
	int t, b;
	int n, s, w, e;
};


int main() {
	int num[6];
	for (int i = 0; i < 6; i++) {
		cin >> num[i];
	}

	Dice dice(num);
	string str;

	cin >> str;
	for (int i = 0; i < str.length();i++) {
		switch (str[i]) {
		case 'E':
			dice.roll_e();
			break;
		case 'N':
			dice.roll_n();
			break;
		case 'W':
			dice.roll_w();
			break;
		case 'S':
			dice.roll_s();
			break;
		}
	}
	cout << dice.getTop() << endl;
	return 0;
}