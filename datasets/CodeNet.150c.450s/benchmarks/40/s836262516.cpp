#include<iostream>
#include<string>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

using namespace std;

class Dice
{
private:
	int tmp;
public:
	int lab[6];
	void rE(){
		tmp = lab[0];
		lab[0] = lab[3];
		lab[3] = lab[5];
		lab[5] = lab[2];
		lab[2] = tmp;
	}
	void rN(){
		tmp = lab[0];
		lab[0] = lab[1];
		lab[1] = lab[5];
		lab[5] = lab[4];
		lab[4] = tmp;
	}
	void rS() {
		tmp = lab[0];
		lab[0] = lab[4];
		lab[4] = lab[5];
		lab[5] = lab[1];
		lab[1] = tmp;
	}
	void rW() {
		tmp = lab[0];
		lab[0] = lab[2];
		lab[2] = lab[5];
		lab[5] = lab[3];
		lab[3] = tmp;
	}
};

int main() {
	Dice dice;
	string seq;
	int i;
	//input
	rep(i,6) cin >> dice.lab[i];
	cin >> seq;

	//roll
	rep(i,seq.length()) {
		switch (seq[i]) {
			case 'E':
				dice.rE();
				break;
			case 'N':
				dice.rN();
				break;
			case 'S':
				dice.rS();
				break;
			case 'W':
				dice.rW();
				break;
			default:
				break;
		}
	}

	//output
	cout << dice.lab[0] << endl;

	return 0;
}